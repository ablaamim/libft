/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:12:18 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 18:57:02 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
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
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "------------------- TEST 3 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 12, 8);
	if (!strcmp("", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	// TEST 4

	printf("%s%s%s", GREEN, "------------------- TEST 4 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 12, 0);
	if (!strcmp("", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 5

	printf("%s%s%s", GREEN, "------------------- TEST 5 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 0, 0);
	if (!strcmp("", ret_ft_substr))
		printf("%s%s%s", GREEN, "[KO]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 6
	printf("%s%s%s", GREEN, "------------------- TEST 6 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str_null, 0, 4);
	if (!strcmp("", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", GREEN, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TESTS 7
	printf("%s%s%s", GREEN, "------------------- TEST 7 ------------------\n", DEFAULT);
	ret_ft_substr = ft_substr(str, 0, 11);
	if (!strcmp("Hello world", ret_ft_substr))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_substr);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "---------------- FINISH ---------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
