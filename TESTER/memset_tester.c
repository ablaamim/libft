/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:22:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 09:44:16 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>
#include <signal.h>
#include <stdbool.h>

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

#define TESTER(f) \
    TEST_SEGFAULT(f,has_segfault_org)\
    TEST_SEGFAULT(ft_##f,has_segfault_ft)\
        if(!has_segfault_org && has_segfault_ft){\
            write(1,"\033[31mi[KO]\033[0m(",13);\
            write(1,#f,strlen(#f));\
            write(1,") ",2);}\
        else\
            write(1,"\033[32m[OK]\033[0m ",13);\


int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	twenty[20] = "0000000000000000000\0";
	char	ft_twenty[20] = "0000000000000000000\0";

/*WE CANT USE SAME ARRAY IN BOTH FUNCTIONS, UNLESS WE RESET THEM TO PREVIOUS VALUES
 SO I PREFFERED TO USE 2 ARRAYS */

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR MEMSET FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/

// TEST SEGFAULT
	printf("%s%s%s", GREEN, "-------------- SEGFAULT TESTS ---------------\n", DEFAULT);
	TESTER(memset(NULL,0,0);)
	TESTER(memset(NULL,0,1);)
	TESTER(memset("NULL",0,0);)
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 1
	memset(twenty, 65, 1);
	ft_memset(ft_twenty, 65, 1);
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR LEN=1.\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	memset(twenty, 200, 5);
	ft_memset(ft_twenty, 200, 5);
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR EXTENDABLE ASCII.\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	memset(twenty, 65, 19);
	ft_memset(ft_twenty, 65, 19);
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR LEN=STRLEN(STR).\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
