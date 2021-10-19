/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 21:41:52 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/19 12:17:17 by ablaamim         ###   ########.fr       */
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
	char	*test = "0123456789";
	char	*test1 = "abcdxyzABCDXYZLOL";
	char	*test2 = "!@~\n \t\b\v[](}";
	char	*test3 = "\0\0\0";
	char	*test4 = "-!*&\0 ()++--/*";

	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	while (index < 10)
	{
		if (ft_isalnum(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT SUPPORT NUM CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	while (index < 17)
	{
		if (ft_isalnum(test1[index]) == 0)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT SUPPORT ALPHA CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	while (index < 12)
	{
		if (ft_isalnum(test2[index]) != isalnum(test2[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM FAILED ON ascii less or equal to 32.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN , "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	while (index < 3)
	{
		if (isalnum(test3[index]) != ft_isalnum(test3[index]))
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM FAILED ON CHAR VALUE '\\0'.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	while (index < 14)
	{
		if (ft_isalnum(test4[index]) == 1)
			printf("%s%s%s", RED, "[KO] --> YOUR ISALNUM DOES NOT WORK FOR PRINTABLE CHARACTERS.\n", DEFAULT);
		else
				printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "------------------ FINISH--------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
