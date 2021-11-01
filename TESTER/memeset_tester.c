/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memeset_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:58:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/01 15:17:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

void	intarray_debug(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[");
	while (i < size - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[size - 1]);
	printf("]");
}

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	twenty[20] = "0000000000000000000\0";
	char	ft_twenty[20] = "0000000000000000000\0";
	int		ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		ft_ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		len1;
	int		len2;

	len1 = sizeof(ten) / sizeof(ten[0]) - 1;
	len2 = sizeof(ft_ten) / sizeof(ft_ten[0]) - 1;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR MEMSET FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
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
	ft_memset(ten, -1, len1);
	printf("IMPL : ");
	intarray_debug(ten, len1);
	printf("\n");
	memset(ft_ten, -1, len2);
	printf("SYST : ");
	intarray_debug(ft_ten, len2);
	printf("\n");
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
