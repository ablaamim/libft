/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:09:26 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/05 16:16:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
# include <stddef.h>
# include <signal.h>
# include <stdbool.h>

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
			write(1,"\033[31mKO \033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32mOK\033[0m ",13);\

int	main(void)
{
	char	*ret_strnstr;
	char	*ret_ft_strnstr;
	char	str0[] = {"Hello world!"};
	char	str1[] = {"world"};
	char	str2[] = {"1337 BENGUERRIR"};
	char	str3[] = {"help"};
/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRNSTR FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS
	printf("%s%s%s", GREEN, "SEGFAULT TESTS :", DEFAULT);
	TESTER(strnstr(NULL,NULL,0);)
	TESTER(strnstr("NULL",NULL,0);)
	TESTER(strnstr(NULL,"NULL",0);)
	TESTER(strnstr("NULL","NULL",0);)
	TESTER(strnstr(NULL,NULL,1);)
	TESTER(strnstr("NULL",NULL,1);)
	TESTER(strnstr(NULL,"NULL",1);)
	TESTER(strnstr("NULL","NULL",1);)
	TESTER(strnstr("NULLO",NULL,3);)
	TESTER(strnstr(NULL,"NULLO",3);)
	TESTER(strnstr("NULLO","NULL",3);)
	TESTER(strnstr(NULL,"",3);)
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 1
	ret_strnstr = strnstr(str0, str1, 5);
	ret_ft_strnstr = ft_strnstr(str0, str1, 5);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
// TEST 2
	ret_strnstr = strnstr(str0, str1, 13);
	ret_ft_strnstr = ft_strnstr(str0, str1, 13);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
// TEST 3
	ret_strnstr = strnstr(str2, str3, 0);
	ret_ft_strnstr = ft_strnstr(str2, str3, 0);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
// TEST 3
	ret_strnstr = strnstr(str2, str3, 100);
	ret_ft_strnstr = ft_strnstr(str2, str3, 100);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
// TEST 4
	ret_strnstr = strnstr(str0, str1, -5);
	ret_ft_strnstr = ft_strnstr(str0, str1, -5);
	if (ret_strnstr == ret_ft_strnstr)
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	printf("%s%s%s", BLUE, "---------------- FINISH ----------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
