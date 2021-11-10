/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:43 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 12:58:29 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
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
        if(has_segfault_org != has_segfault_ft){\
            write(1,"\033[31m [KO]    \033[0m(",16);\
            write(1,#f,strlen(#f));\
            write(1,")\n",2);}\
        else\
            write(1,"\033[32m [OK]\n\033[0m ",13);\

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	size_t	ret_str0;
	size_t	ret_str1;
/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRLCPY FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS

	printf("%s%s%s", GREEN, "------------- SEGFAULT TESTS ----------------\n", DEFAULT);
	TESTER(strlcpy("NULL",NULL,0);)
		usleep(250000);
	TESTER(strlcpy("NULL",NULL,1);)
		usleep(250000);
	TESTER(strlcpy("NULLO",NULL,3);)
		usleep(250000);
	TESTER(strlcpy(NULL,NULL,0);)
		usleep(250000);
	TESTER(strlcpy(NULL,NULL,1);)
		usleep(250000);
	TESTER(strlcpy(NULL,"NULL",0);)
		usleep(250000);
	TESTER(strlcpy(NULL,"NULL",1);)
		usleep(250000);
	TESTER(strlcpy(NULL,"NULLO",3);)
		usleep(250000);
	TESTER(strlcpy("NULL","NULL",0);)
		usleep(250000);
	TESTER(strlcpy("NULL","NULL",1);)
		usleep(250000);
	TESTER(strlcpy("NULLO","NULL",3);)
		usleep(250000);
	printf("\n");
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 0);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 0);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 5);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 5);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
