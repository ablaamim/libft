/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:58:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 13:33:21 by ablaamim         ###   ########.fr       */
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

pid_t	pid;
bool	has_segfault_ft;
bool	has_segfault_org;

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
			write(1,"\033[31m[KO]\033[0m(",13);\
			write(1,#f,strlen(#f));\
			write(1,") ",2);}\
		else\
			write(1,"\033[32m[OK]\033[0m ",13);\

void	ft_intarray_debug(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", tab[size - 1]);
		i++;
	}
	printf("%d", tab[size - 1]);
	printf("]");
}

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	twenty[20] = "0000000000000000000\0";
	char	ft_twenty[20] = "0000000000000000000\0";
	char	twenty2[20] = "0000000000000000000\0";
	char	ft_twenty2[20] = "0000000000000000000\0";
	char	twenty3[20] = "0000000000000000000\0";
	char	ft_twenty3[20] = "0000000000000000000\0";
	char	empty[2] = "";
	char	ft_empty[2] = "";
	char	*thirty_a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\0";
	char	*ten_a = "aaaaaaaaaa\0";
	int		to_fill[] = {0, 1, 2, 3};
	int		intarray[] = {1337, 42, 69, 404};
	int		to_fill2[] = {0, 1, 2, 3};
	int		intarray2[] = {1337, 42, 69, 404};

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR MEMCPY FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/

// SEGFAULT TEST
	printf("%s%s%s", GREEN, "-------------- SEGFAULT TESTS : --------------\n", DEFAULT);
	TESTER(memcpy(NULL,NULL,0);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULL",NULL,0);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy(NULL,"NULL",0);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULL","NULL",0);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy(NULL,NULL,1);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULL",NULL,1);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy(NULL,"NULL",1);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULL","NULL",1);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULL",NULL,3);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy(NULL,"NULL",3);)
	printf("\n");
	usleep(250000);
	TESTER(memcpy("NULLO","NULL",3);)
	printf("\n");
	usleep(250000);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);

// TEST 1
	memcpy(twenty, ten_a, 1);
	ft_memcpy(ft_twenty, ten_a, 1);
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 1\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);	
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);

// TEST 2
	memcpy(twenty2, thirty_a, 19);
	ft_memcpy(ft_twenty2, thirty_a, 19);
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	if (strcmp(twenty2, ft_twenty2))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with len = strlen(dst)\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);

// TEST 3
	memcpy(twenty3, thirty_a, 0);
	ft_memcpy(ft_twenty3, thirty_a, 0);
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	if (strcmp(twenty3, ft_twenty3))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 0\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);

// TEST 4
	memcpy(twenty, ten_a, 20);
	ft_memcpy(ft_twenty, ten_a, 20);
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n > strlen(src)\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 5
	memcpy(twenty, "", 10);
	ft_memcpy(ft_twenty, "", 10);
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with empty src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 6
	memcpy(empty, ten_a, 1);
	ft_memcpy(ft_empty, ten_a, 1);
	printf("%s%s%s", GREEN, "------------------ TEST 6 -------------------\n", DEFAULT);
	if (strcmp(empty, ft_empty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with dst = empty\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", GREEN, "--------------- INTARRAY TEST ---------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "------------ MUST LOOK IDENTICAL ------------\n", DEFAULT);
	memcpy(to_fill, intarray, 4);
	printf(GREEN);
	ft_intarray_debug(to_fill, 4);
	printf("\n");
	ft_memcpy(to_fill2, intarray2, 4);
	ft_intarray_debug(to_fill2, 4);
	printf("\n");
	printf(DEFAULT);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
