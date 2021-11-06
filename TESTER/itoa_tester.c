/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:19:36 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 19:18:13 by ablaamim         ###   ########.fr       */
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

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR ITOA FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
//TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(-2147483648);
	if (!strcmp(ret_itoa, "-2147483648"))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
//TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(2147483647);
	if (!strcmp(ret_itoa, "2147483647"))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
//TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(0);
	if (!strcmp(ret_itoa, "0"))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(-1234);
	if (!strcmp(ret_itoa, "-1234"))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	ret_itoa = ft_itoa(1234);
	if (!strcmp(ret_itoa, "1234"))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_itoa);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
