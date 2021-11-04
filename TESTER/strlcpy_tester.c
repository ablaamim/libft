/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:43 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 17:10:21 by ablaamim         ###   ########.fr       */
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
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	size_t	ret_str0;
	size_t	ret_str1;
/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRLCPY FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 0);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 0);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 5);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 5);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
