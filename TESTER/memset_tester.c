/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:22:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 19:30:11 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

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
