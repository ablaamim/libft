/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:35:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 07:34:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)	argv;
	(void)	argc;
	int		index;
	char	test[] = "0123456789"; // NUMERICS
	char	test1[] = "abcdxyzABCDXYZLOL"; // ALPHA CHARS
	char	test2[] = "!@~\n \t\b\v[](}"; //SPECIAL CHARS + WHITE SPACES
	char	test3[] = "\0\0\0"; // NULL CHAR
	char	test4[] = "-!*&\0 ()++--/*"; // MORE SPECIAL CHARS
	int		len0;
	int		len1;
	int		len2;
	int		len3;
	int		len4;

/******************************************************************************/

	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR ISALNUM FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/


// CALCULATE SIZE OF EACH STRING
	len0 = sizeof(test) / sizeof(test[0]) - 1;
	len1 = sizeof(test1) / sizeof(test1[0]) - 1;
	len2 = sizeof(test2) / sizeof(test2[0]) - 1;
	len3 = sizeof (test3) / sizeof(test3[0]) - 1;
	len4 = sizeof(test4) / sizeof(test4[0]) - 1;
// TEST 1
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < len0)
	{
		if (ft_isalnum(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT SUPPORT NUMERIC CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	while (index < len1)
	{
		if (ft_isalnum(test1[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT SUPPORT ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	while (index < len2)
	{
		if (ft_isalnum(test2[index]) != isalnum(test2[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM FAILED ON SPECIAL CHARS AND WHITESPACES.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN , "[OK]\n", DEFAULT);
		index++;
	}
// TEST 4
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	while (index < len3)
	{
		if (isalnum(test3[index]) != ft_isalnum(test3[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM FAILED ON CHAR VALUE '\\0'.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
// TEST 5
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 5 --------------------\n", DEFAULT);
	while (index < len4)
	{
		if (ft_isalnum(test4[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT WORK FOR PRINTABLE CHARACTERS.\n", DEFAULT);
		else
				printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
