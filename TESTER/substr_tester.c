/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:12:18 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 08:05:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	char	str[13] = "Hello world!";
	char	str_null[4] = "";
	char	*ret_ft_substr;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR SUBSTR FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1

	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 5, 8);
	if (!strcmp(" world!", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2

	printf("%s%s%s", GREEN, "------------------- TEST 2 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 0, 5);
	if (!strcmp("Hello", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "------------------- TEST 3 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 12, 8);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 3);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 3);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 4

	printf("%s%s%s", GREEN, "------------------- TEST 4 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 12, 0);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 4);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 4);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 5
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 0, 0);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 5);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 5);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 6

	ret_ft_substr = ft_substr(str_null, 0, 4);
	if (!strcmp("", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 6);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 6);
	free(ret_ft_substr);
// TESTS 7
	printf("%s%s%s", GREEN, "----------------- TEST 7 --------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 0, 11);
	if (!strcmp("Hello world", ret_ft_substr))
		printf("\033[92mTest %2.i - OK \033[0m\n", 7);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 7);
	free(ret_ft_substr);
	printf("%s%s%s", BLUE, "---------------- FINISH ----------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
