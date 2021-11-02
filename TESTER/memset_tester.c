/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 00:01:41 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/31 17:12:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

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

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	twenty[20] = "0000000000000000000\0";
	char	ft_twenty[20] = "0000000000000000000\0";
	int		ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		ft_ten[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int		n = 10;
	int		arr[n];

/*WE CANT USE SAME ARRAY IN BOTH FUNCTIONS, UNLESS WE RESET THEM TO PREVIOUS VALUES
 SO I PREFFERED TO USE 2 ARRAYS */

// TEST 1
	memset(twenty, 65, 1);
	ft_memset(ft_twenty, 65, 1);
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR LEN=1.\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}

// TEST 2
	memset(twenty, 200, 5);
	ft_memset(ft_twenty, 200, 5);
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR EXTENDABLE ASCII.\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
// TEST 3
	memset(twenty, 65, 19);
	ft_memset(ft_twenty, 65, 19);
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	if (ft_strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] --> YOUR MEMSET DOES NOT WORK FOR LEN=STRLEN(STR).\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
// TEST 4
	memset(ten, 64, sizeof(int));
	ft_memset(ft_ten, 64, sizeof(int));
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	if (ten == ft_ten)
	{
		printf(RED);
		printf("[KO] YOUR MEMSET DOES NOT WORK FOR LIST OF INTEGERS.\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
// TEST 5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	printf(GREEN);
	printf("YOUR OUTPUT : \n");
	ft_memset(arr, 0 , n * sizeof(arr[0]));
	intarray_debug(arr, n);
	printf("\n");
	printf("EXPECTED OUTPUT : \n");
	printf("[0, 0, 0, 0, 0, 0, 0, 0, 0, 0]\n");
	printf(DEFAULT);
	printf("%s%s%s", GREEN, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
