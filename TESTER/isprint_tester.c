/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:12:21 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/31 13:47:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	int		index;
	char	*test = "0123456789";
	char	*test1 = "abcdxyzABCDXYZLOL";
	char	*test2 = "\n\t\b\v";
	char	*test3 = "\0\0\0";
	char	*test4 = "-!*& ()++--/*";


// TEST 1
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < 10)
	{
		if (ft_isprint(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT SUPPORT NUMERIC VALUES.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}

// TEST 2
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	while (index < 17)
	{
		if (ft_isprint(test1[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT SUPPORT ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}

// TEST 3
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	while (index < 5)
	{
		if (ft_isprint(test2[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT FAILED ON ascii less than 32.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN , "[OK]\n", DEFAULT);
		index++;
	}

// TEST 4
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	while (index < 3)
	{
		if (isprint(test3[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT FAILED ON CHAR VALUE '\\0'.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}

// TEST 5
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	while (index < 13)
	{
		if (ft_isprint(test4[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISPRINT DOES NOT WORK FOR PRINTABLE CHARACTERS.\n", DEFAULT);
		else
				printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
