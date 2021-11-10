/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:39:01 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:08:41 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <strings.h>
#include <unistd.h>

int	main(void)
{
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "";
	char	str3[4] = "";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	int		index;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR BZERO FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);

// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	index = 0;
	bzero(str0, 13);
	ft_bzero(str1, 13);
	while (index < 13)
	{
		if (str0[index] != str1[index])
			break ;
		++index;
	}
	if (index == 13)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	index = 0;
	bzero(str2, 1);
	ft_bzero(str3, 1);
	while (index < 1)
	{
		if (str2[index] != str3[index])
			break ;
		++index;
	}
	if (index == 1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	index = 0;
	bzero(arr0, 4 * sizeof(*arr0));
	ft_bzero(arr1, 4 * sizeof(*arr1));
	while (index < 5)
	{
		if (arr0[index] != arr1[index])
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH ---------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
