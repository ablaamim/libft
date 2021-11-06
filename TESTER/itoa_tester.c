/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:19:36 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 10:57:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*ret_itoa;
	(void)	argc;
	(void)	argv;
//TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(-2147483648);
	if (!strcmp(ret_itoa, "-2147483648"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
//TEST 2
	printf("%s%s%s")
	ret_itoa = ft_itoa(2147483647);
	if (!strcmp(ret_itoa, "2147483647"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_itoa);
//TEST 3
	ret_itoa = ft_itoa(0);
	if (!strcmp(ret_itoa, "0"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_itoa);
// TEST 4
	ret_itoa = ft_itoa(-1234);
	if (!strcmp(ret_itoa, "-1234"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(ret_itoa);
// TEST 4
	ret_itoa = ft_itoa(1234);
	if (!strcmp(ret_itoa, "1234"))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(ret_itoa);

	return (EXIT_SUCCESS);
}
