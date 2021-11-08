/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:05:51 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/08 19:55:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	int		index;
	char	test[] = "0123456789";
	char	test1[] = "abcdxyzABCDXYZLOL";
	char	test2[] = "\n\t\b\v";
	char	test3[] = "\0\0\0";
	char	test4[] = "-!*& ()++--/*";
	int		len0;
	int		len1;
	int		len2;
	int		len3;
	int		len4;

/*****************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR ISPRINT FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/*****************************************************************************/

	len0 = sizeof(test) / sizeof(test[0]) - 1;
	len1 = sizeof(test1) / sizeof(test1[0]) - 1;
	len2 = sizeof(test2) / sizeof(test2[0]) - 1;
	len3 = sizeof(test3) / sizeof(test3[0]) - 1;
	len4 = sizeof(test4) / sizeof(test4[0]) - 1;
	// TEST 1
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < len0)
	{
		if (ft_isprint(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT SUPPORT NUMERIC VALUES.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(1);
// TEST 2
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	while (index < len1)
	{
		if (ft_isprint(test1[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT SUPPORT ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(1);
// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	while (index < len2)
	{
		if (ft_isprint(test2[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT FAILED ON ascii less than 32.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN , "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(1);
// TEST 4
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	while (index < len3)
	{
		if (isprint(test3[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT FAILED ON CHAR VALUE '\\0'.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(1);
// TEST 5
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	while (index < len4)
	{
		if (ft_isprint(test4[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT WORK FOR PRINTABLE CHARACTERS.\n", DEFAULT);
		else
				printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(1);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
