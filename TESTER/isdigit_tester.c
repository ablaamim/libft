/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:04:19 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/01 12:43:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	int		index;
	char	test[] = "0123456789";
	char	test1[] = "abcdefghzkABCDEFGHZK";
	char	test2[] = "~\t \n()\0\r\v\b{}[]*#@!";
	int		len0;
	int		len1;
	int		len2;
/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, " \tTESTING YOUR ISDIGIT FUNCTION\n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	len0 = sizeof (test) / sizeof (test[0]) - 1;
	len1 = sizeof (test1) / sizeof(test1[0]) - 1;
	len2 = sizeof (test2) / sizeof(test2[0]) - 1;
	index = 0;
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	while (index < len0)
	{
		if (ft_isdigit(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] ---> YOUR ISDIGIT DOES NOT WORK FOR NUMERIC CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "-------------------- TEST 2 -----------------\n", DEFAULT);
// TEST 2
	index = 0;
	while (index < len1)
	{
		if (isdigit(test1[index]) != ft_isdigit(test1[index]))
				printf("%s%s%s", RED, "[KO] ---> YOUR ISDIGIT DOES NOT WORK FOR ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TEST 3 -----------------\n", DEFAULT);
	while (index < len2)
	{
		if (isdigit(test2[index] != ft_isdigit(test2[index])))
		{
			if (test2[index] < 32 || test2[index] == 127)
				printf("%s%s%s", RED, "[KO] ---> YOUR ISDIGIT FUNCTION DOES NOT SUPPORT NON PRINTABLE CHARACTERS.\n", DEFAULT);
		}
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
