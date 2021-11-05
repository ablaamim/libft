/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:48:53 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 18:16:32 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
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
			write(1,"\033[31mi[KO]\033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32m[OK]\033[0m ",13);\

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[13] = "Hello world!";
	char	str1[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	char	*ptr_str0;
	char	*ptr_str1;
	int		*ptr_arr0;
	int		*ptr_arr1;

/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR MEMCHR FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/

// SEGFAULT TESTS :
	printf("%s%s%s", GREEN, "--------------- SEGFAULT TESTS  -------------\n", DEFAULT);;
	TESTER(memchr(NULL,0,0);)
	sleep(1);
	TESTER(memchr(NULL,0,1);)
	sleep(1);
	TESTER(memchr("NULL",0,0);)
	sleep(1);
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
//TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ptr_str0 = memchr(str0, 'l', 2);
	ptr_str1 = ft_memchr(str0, 'l', 2);
	if (ptr_str0 == ptr_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
//TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ptr_str0 = memchr(str0, 'u', 20);
	ptr_str1 = ft_memchr(str0, 'u', 20);
	if (ptr_str0 == ptr_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ptr_str0 = ft_memchr(str1, 'j', 3);
	ptr_str1 = memchr(str1, 'j', 3);
	if (ptr_str0 == ptr_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	sleep(1);
	ptr_str0 = ft_memchr(str1, '\0', 3);
	ptr_str1 = memchr(str1, '\0', 3);
	if (ptr_str0 == ptr_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ptr_arr0 = memchr(arr0, 5, 3 * (sizeof(*arr0)));
	ptr_arr1 = ft_memchr(arr0, 5, 3 * (sizeof(*arr0)));
	if (ptr_arr0 == ptr_arr1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST  5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ptr_arr0 = memchr(arr0, 5, 40 * (sizeof(*arr0)));
	ptr_arr1 = ft_memchr(arr0, 5, 40 * (sizeof(*arr0)));
	if (ptr_arr0 == ptr_arr1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "---------------- FINISH ----------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
