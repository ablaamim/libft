/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memeset_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:01:41 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/20 00:35:57 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

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
	int		ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		ft_ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	memset(twenty, 65, 1);
	ft_memset(ft_twenty, 65, 1);
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work for len = 1.\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memset(twenty, 200, 5);
	ft_memset(ft_twenty, 200, 5);
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work with ASCII extended.\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memset(twenty, 65, 19);
	ft_memset(ft_twenty, 65, 19);
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memset does not work for len = strlen(str).\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memset(ten, 64, sizeof(int));
	ft_memset(ft_ten, 64, sizeof(int));
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	if (ten == ft_ten)
	{
		printf(RED);
		printf("[KO] Your memset does not work for list of integers.\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
