/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:27:51 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 19:15:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	int		index;
	char	test[] = "0123456789";
	char	test1[] = "abcdxyzABCDXYZLOL";
	char	test2[] = "!@~\n \t\b\v[](}";
	char	test3[] = "\0\0\0";
	char	test4[] = "-!*&\0 ()++--/*";

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR ISASCII FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/

// TEST 1
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TEST 1 -----------------\n", DEFAULT);
	while (index < 10)
	{
		if (ft_isascii(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISASCII DOES NOT SUPPORT NUM CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	while (index < 17)
	{
		if (ft_isascii(test1[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISASCII DOES NOT SUPPORT ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	while (index < 12)
	{
		if (ft_isascii(test2[index]) != isascii(test2[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISASCII FAILED ON SPECIAL CHARS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN , "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	while (index < 3)
	{
		if (isascii(test3[index]) != ft_isascii(test3[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISASCII FAILED ON CHAR VALUE '\\0'.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 5
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	while (index < 14)
	{
		if (ft_isascii(test4[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISASCII DOES NOT WORK FOR PRINTABLE CHARACTERS.\n", DEFAULT);
		else
				printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "------------------- FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
