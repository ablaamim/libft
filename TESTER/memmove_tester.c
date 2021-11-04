/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:08:43 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 11:21:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>
#include <stdbool.h>
#include <string.h>

int orginal_crash;
int ft_crash;
pid_t pid;
bool has_segfault_ft;
bool has_segfault_org;
int a;

# define TEST_SEGFAULT(x,y) do { \
	if ((pid = fork()) < 0) \
		exit(EXIT_FAILURE); \
	if (pid == 0) { \
		do { x } while(0); \
		exit(EXIT_SUCCESS); \
	} else { \
		wait(&pid); \
		y = WIFSIGNALED(pid); \
	} \
} while(0);
/********************************/
#define TESTER(f) \
	TEST_SEGFAULT(f,has_segfault_org)\
	TEST_SEGFAULT(ft_##f,has_segfault_ft)\
		if(!has_segfault_org && has_segfault_ft){\
			write(1,"\033[31mKO \033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32mOK\033[0m ",13);\

int	main(int argc, char *argv[])
{
	(void)	argv;
	(void)	argc;
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "lol";
	char	str3[4] = "lol";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	char	*ptr_str0;
	char	*ptr_str1;
	char	*ptr_str2;
	char	*ptr_str3;
	int		*ptr_arr0;
	int		*ptr_arr1;
	int		index;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR MEMMOVE FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS :
	printf("%s%s%s", GREEN, "-------------- SEGFAULT TESTS : -------------\n", DEFAULT);
	TESTER(memmove(NULL, NULL, 0);)
	sleep(1);
	TESTER(memmove("NULL", NULL, 0);)
	sleep(1);
	TESTER(memmove(NULL, "NULL", 0);)
	sleep(1);
	TESTER(memmove("NULL", "NULL", 0);)
	sleep(1);
	TESTER(memmove(NULL, NULL, 1);)
	sleep(1);
	TESTER(memmove("NULL", NULL, 1);)
	sleep(1);
	TESTER(memmove(NULL, "NULL", 1);)
	sleep(1);
	TESTER(memmove("NULL", "NULL", 1);)
	TESTER(memmove("NULLO", NULL, 3);)
	sleep(1);
	TESTER(memmove(NULL, "NULLO", 3);)
	sleep(1);
	TESTER(memmove("NULLO", "NULL", 3);)
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 1
	ptr_str0 = memmove(str0, str0 + 6, 0);
	ptr_str1 = ft_memmove(str1, str1 + 6, 0);
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	ptr_str0 = memmove(str0 + 5, str0 + 4, 4);
	ptr_str1 = ft_memmove(str1 + 5, str1 + 4, 4);
	printf("%s%s%s", GREEN, "------------------- TEST 2 ------------------\n", DEFAULT);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	// TEST 3
	ptr_str2 = ft_memmove(str2, str0, 3);
	ptr_str3 = memmove(str3, str1, 3);
	printf("%s%s%s", GREEN, "------------------- TEST 3 ------------------\n", DEFAULT);
	if (!strcmp(str2, str3) && !strcmp(ptr_str2, ptr_str3))
		printf("%s%s%s", GREEN,"[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
//TEST 4
	index = 0;
	ptr_arr0 = memmove(arr0, arr0 + 2, 3 * sizeof(*arr0));
	ptr_arr1 = ft_memmove(arr1, arr1 + 2, 3 * sizeof(*arr1));
	printf("%s%s%s", GREEN, "------------------- TEST 4 ------------------\n", DEFAULT);
	while (index < 5)
	{
		if ((arr0[index] != arr1[index]) && (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 5
	index = 0;
	ptr_arr0 = memmove(arr0, arr0 + 2, 1);
	ptr_arr1 = ft_memmove(arr1, arr1 + 2, 1);
	printf("%s%s%s", GREEN, "------------------- TEST 5 ------------------\n", DEFAULT);
	while (index < 5)
	{
		if ((arr0[index] != arr1[index]) && (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
