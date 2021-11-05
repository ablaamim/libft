/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:05:17 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 18:14:25 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>
#include <stdbool.h>
#include <string.h>

pid_t pid;
bool has_segfault_ft;
bool has_segfault_org;

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

#define TESTER(f) \
	TEST_SEGFAULT(f,has_segfault_org)\
	TEST_SEGFAULT(ft_##f,has_segfault_ft)\
		if(!has_segfault_org && has_segfault_ft){\
			write(1,"\033[31m[KO]\n\033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32m[OK]\n\033[0m ",13);\

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		ret_memcmp;
	int		ret_ft_memcmp;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"Hello world"};
	char	str2[] = {"1337 BENGUERIR"};
	char	str3[] = {"Can I TEST YOUR CODE?"};

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR MEMCMP FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS :
	printf("%s%s%s", GREEN, "-------------- SEGFAULT TESTS ---------------\n", DEFAULT);
	TESTER(memcmp(NULL,NULL,0);)
	sleep(1);
	TESTER(memcmp("NULL",NULL,0);)
	sleep(1);
	TESTER(memcmp(NULL,"NULL",0);)
	sleep(1);
	TESTER(memcmp("NULL","NULL",0);)
	sleep(1);
	TESTER(memcmp(NULL,NULL,1);)
	sleep(1);
	TESTER(memcmp("NULL",NULL,1);)
	sleep(1);
	TESTER(memcmp(NULL,"NULL",1);)
	sleep(1);
	TESTER(memcmp("NULL","NULL",1);)
	sleep(1);
	TESTER(memcmp("NULLO",NULL,3);)
	sleep(1);
	TESTER(memcmp(NULL,"NULLO",3);)
	sleep(1);
	TESTER(memcmp("NULLO","NULL",3);)
	sleep(1);
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, 5);
	ret_ft_memcmp = ft_memcmp(str0, str1, 5);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, 13);
	ret_ft_memcmp = ft_memcmp(str0, str1, 13);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str2, str3, 0);
	ret_ft_memcmp = ft_memcmp(str2, str3, 0);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str2, str3, 100);
	ret_ft_memcmp = ft_memcmp(str2, str3, 100);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ret_memcmp = memcmp(str0, str1, -5);
	ret_ft_memcmp = memcmp(str0, str1, -5);
	if (ret_memcmp == ret_ft_memcmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "----------------- FINISH ---------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
