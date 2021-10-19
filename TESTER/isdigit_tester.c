/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:30:29 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/19 13:34:44 by ablaamim         ###   ########.fr       */
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
	char	*test = "0123456789";
	char	*test1 = "abcdefghzkABCDEFGHZK";
	char	*test2 = "~\t \n()\0\r\v\b{}[]*#@!";

	index = 0;
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	while (index < 10)
	{
		if (ft_isdigit(test[index]) == 0)
			printf("%s%s%s", RED, "[KO] ---> YOUR ISDIGIT DOES NOT WORK FOR NUMERIC CHARACTERS.\n", DEFAULT);
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	printf("%s%s%s", GREEN, "-------------------- TEST 2 -----------------\n", DEFAULT);
	index = 0;
	while (index < 20)
	{
		if (isdigit(test1[index]) != ft_isdigit(test1[index]))
		{
			if ((test1[index] >= 'a' && test1[index] <= 'z') || (test1[index] >= 'A' && test1[index] <= 'Z'))
				printf("%s%s%s", RED, "[KO] ---> YOUR ISDIGIT DOES NOT WORK FOR ALPHA CHARACTERS.\n", DEFAULT);
		}
		else
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		index++;
	}
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TEST 3 -----------------\n", DEFAULT);
	while (index < 18)
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
	printf("%s%s%s", GREEN, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
