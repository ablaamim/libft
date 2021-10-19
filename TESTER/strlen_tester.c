/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:40:00 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/19 13:52:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	str[] = "0123456789";
	char	str1[] = "";
	char	str2[] = "COUNT ME, I AINT THAT LONG!.";
	char	str3[] = "Thi$ $hit i$ DeliC4TE\t! \n";
	char	str4[] = "\0";

	printf("%s%s%s", GREEN, "------------------- TESTS -------------------\n", DEFAULT);
	if (ft_strlen(str) != strlen(str))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 1 .\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	if (ft_strlen(str1) != strlen(str1))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 2.\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	if (ft_strlen(str2) != strlen(str2))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 2.\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	if (ft_strlen(str3) != strlen(str3))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 2.\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	if (ft_strlen(str4) != strlen(str4))
		printf("%s%s%s", RED, "[KO] --> YOU FAILED TEST 2.\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	printf("%s%s%s", GREEN, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
