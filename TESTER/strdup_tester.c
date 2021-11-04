/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:06:29 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 12:25:12 by ablaamim         ###   ########.fr       */
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
	char	str1[6] = "1337BG";
	char	*ret_str0;
	char	*ret_str1;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t    TESTING YOUR STRDUP : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------- TEST 1 ------------------\n", DEFAULT);
	ret_str0 = strdup(str0);
	ret_str1 = ft_strdup(str0);
	if (!strcmp(str0, ret_str1) && !strcmp(ret_str0, ret_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_str0);
	free(ret_str1);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	printf("%s%s%s", GREEN, "------------------- TEST 2 ------------------\n", DEFAULT);
	ret_str0 = strdup(str1);
	ret_str1 = ft_strdup(str1);
	if (!strcmp(str1, ret_str1) && !strcmp(ret_str0, ret_str1))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_str0);
	free(ret_str1);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
