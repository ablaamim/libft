/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero_tester.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 01:25:52 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/02 08:46:49 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "";
	char	str3[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	int		index;

	/**************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR BZERO FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	/**************************************************************************/
	index = 0;
	bzero(str0, 13);
	ft_bzero(str1, 13);
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	while (index < 13)
	{
		if (str0[index] != str1[index])
			break ;
		++index;
	}
	if (index == 13)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO] --> Your bzero failed test 1\n", DEFAULT);
	index =0;
	bzero(str2, 1);
	ft_bzero(str3, 1);
	printf("%s%s%s", GREEN, "------------------- TEST 3 ------------------\n", DEFAULT);
	while (index < 1)
	{
		if (str2[index] != str3[index])
			break ;
		++index;
	}
	if (index == 1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO] --> Your bzero failed test 3.\n", DEFAULT);
	
	index =0;
	bzero(arr0, 4 * sizeof(*arr0));
	ft_bzero(arr1, 4 * sizeof(*arr1));
	printf("%s%s%s", GREEN, "------------------- TEST 4 ------------------\n", DEFAULT);
	while (index < 5)
	{
		if (arr0[index] != arr1[index])
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO] --> Your bzero failed test 4.\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
