/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:38:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:19:51 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
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
        if(has_segfault_org != has_segfault_ft){\
            write(1,"\033[31m [KO]    \033[0m(",16);\
            write(1,#f,strlen(#f));\
            write(1,")\n",2);}\
		else\
			write(1,"\033[32m[OK]\033[0m ",13);\

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	str[] = "0123456789";
	char	str1[] = "";
	char	str2[] = "COUNT ME, I AINT THAT LONG!.";
	char	str3[] = "Thi$ $hit i$ DeliC4TE\t! \n";
	char	str4[] = "\0";

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t     TESTING YOUR STRLEN : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/

// SEGFAULT TEST 

	printf("%s%s%s", GREEN, "--------------- SEGFAULT TESTS --------------\n", DEFAULT);
	TESTER(strlen(NULL);)
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// ALL TESTS IN ONE
	printf("%s%s%s", GREEN, "------------------- TESTS -------------------\n", DEFAULT);
	if (ft_strlen(str) != strlen(str) && ft_strlen(str1) != strlen(str1) && strlen(str2) != ft_strlen(str2) &&
		ft_strlen(str3) != strlen(str3) && ft_strlen(str4) != strlen(str4))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 1 .\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "-------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
