/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:57:40 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/20 18:22:48 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	char	str2[4] = "lol";
	char	str3[4] = "lol";
	int		arr0[5] = {1, 2, 3, 4, 5};
	int		arr1[5] = {1, 2, 3, 4, 5};
	char	*ptr_str0;
	char	*ptr_str1;
	char	*ptr_str2;
	char	*ptr_str3;
	int		*ptr_arr0;
	int		*ptr_arr1;
	int		index;

	ptr_str0 = memmove(str0, str0 + 6, 0);
	ptr_str1 = ft_memmove(str1, str1 + 6, 0);
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);

	ptr_str0 = memmove(str0 + 5, str0 + 4, 4);
	ptr_str1 = ft_memmove(str1 + 5, str1 + 4, 4);
	printf("%s%s%s", GREEN, "------------------- TEST 2 ------------------\n", DEFAULT);
	if (!strcmp(str0, str1) && !strcmp(ptr_str0, ptr_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);

	ptr_str2 = ft_memmove(str2, str0, 3);
	ptr_str3 = memmove(str3, str1, 3);
	printf("%s%s%s", GREEN, "------------------- TEST 3 ------------------\n", DEFAULT);
	if (!strcmp(str2, str3) && !strcmp(ptr_str2, ptr_str3))
		printf("%s%s%s", GREEN,"[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	
	index =0;
	ptr_arr0 = memmove(arr0, arr0 + 2, 3 * sizeof(*arr0));
	ptr_arr1 = ft_memmove(arr1, arr1 + 2, 3 * sizeof(*arr1));
	printf("%s%s%s", GREEN, "------------------- TEST 4 ------------------\n", DEFAULT);
	while (index < 5)
	{
		if ((arr0[index] != arr1[index]) && (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[KO]\n", DEFAULT);

	index =0;
	ptr_arr0 = memmove(arr0, arr0 + 2, 1);
	ptr_arr1 = ft_memmove(arr1, arr1 + 2, 1);
	printf("%s%s%s", GREEN, "------------------- TEST 5 -------------------\n", DEFAULT);
	while (index < 5)
	{
		if ((arr0[index] != arr1[index]) && (ptr_arr0[index] != ptr_arr1[index]))
			break ;
		++index;
	}
	if (index == 5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
