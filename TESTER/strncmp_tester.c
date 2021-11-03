/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:55:58 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 21:45:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		ret_strncmp;
	int		ret_ft_strncmp;
	char	str0[] = {"THATS WHAT SHE SAID"};
	char	str1[] = {"THATS WHAT SHE SAID"};
	char	str2[] = {"1337 BENGUERIR"};
	char	str3[] = {"DONT STRNCMP WHAT CANT BE COMPARED."};

	/**************************************************************************/
	printf("%s%s%s", BLUE, "-----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR STRCMP FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "-----------------------------------------------\n", DEFAULT);
	/**************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str0, str1, 5);
	ret_ft_strncmp = ft_strncmp(str0, str1, 5);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str0, str1, 13);
	ret_ft_strncmp = ft_strncmp(str0, str1, 13);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str2, str3, 0);
	ret_ft_strncmp = ft_strncmp(str2, str3, 0);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
	printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str2, str3, 100);
	ret_ft_strncmp = ft_strncmp(str2, str3, 100);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 5
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str0, str1, -5);
	ret_ft_strncmp = ft_strncmp(str0, str1, -5);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
