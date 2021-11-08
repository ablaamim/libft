/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:39:42 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/08 19:54:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)	argv;
	(void)	argc;
	int		index;
	char	test[] = "abcdexyzABCDEXYZ";
	char	test1[] = "0123456789";
	char	test2[] = "\0\n@$*!:[]{}~`'/";
	int	len0;
	int	len1;
	int	len2;

	len0 = sizeof(test) / sizeof(test[0]) - 1;
	len1 = sizeof(test1) / sizeof(test1[0]) - 1;
	len2 = sizeof(test2) / sizeof(test2[0]) - 1;
/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t\tTESTING YOUR ISALPHA\n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
	// TEST 1
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < len0)
	{
		if (ft_isalpha(test[index]) != isalpha(test[index]))
			printf("%s%s%s", RED, "[KO] ---> YOUR ISALPHA DOES NOT WORK FOR ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	index = 0;
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	while (index < len1)
	{
		if (ft_isalpha(test1[index]) == 1)
			printf("%s%s%s", RED, "[KO] ---> YOUR ISALPHA DOES NOT WORK FOR NUMERIC VALUES.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	while (index < len2)
	{
		if (ft_isalpha(test2[index]) != isalpha(test2[index]))
		{
			if (test2[index] == 0)
				printf("%s%s%s", RED, "[KO] ---> YOUR ISALPHA DOES NOT WORK FOR '\\0' character.\n", DEFAULT);
			else if (test2[index] < 32 || test2[index] == 127)
				printf("%s%s%s", RED, "[KO] ---> YOUR ISALPHA DOES NOT WORK FOR NON PRINTABLE CHARACTERS.\n", DEFAULT);
		}
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
