/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 07:58:07 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/02 08:02:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char twenty[20] = "0000000000000000000\0";
	char ft_twenty[20] = "0000000000000000000\0";
	char twenty2[20] = "0000000000000000000\0";
	char ft_twenty2[20] = "0000000000000000000\0";
	char twenty3[20] = "0000000000000000000\0";
	char ft_twenty3[20] = "0000000000000000000\0";
	char empty[2] = "";
	char ft_empty[2] = "";
	char *thirty_a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\0";
	char *ten_a = "aaaaaaaaaa\0";

	/**************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR MEMCPY FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	/**************************************************************************/

	memcpy(twenty, ten_a, 1);
	ft_memcpy(ft_twenty, ten_a, 1);
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 1\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);	
	}
	memcpy(twenty2, thirty_a, 19);
	ft_memcpy(ft_twenty2, thirty_a, 19);
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	if (strcmp(twenty2, ft_twenty2))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with len = strlen(dst)\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty3, thirty_a, 0);
	ft_memcpy(ft_twenty3, thirty_a, 0);
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	if (strcmp(twenty3, ft_twenty3))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n = 0\n");
		printf(DEFAULT);
	}
	else 
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty, ten_a, 20);
	ft_memcpy(ft_twenty, ten_a, 20);
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with n > strlen(src)\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(twenty, "", 10);
	ft_memcpy(ft_twenty, "", 10);
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	if (strcmp(twenty, ft_twenty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with empty src\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	memcpy(empty, ten_a, 1);
	ft_memcpy(ft_empty, ten_a, 1);
	printf("%s%s%s", GREEN, "------------------ TEST 6 -------------------\n", DEFAULT);
	if (strcmp(empty, ft_empty))
	{
		printf(RED);
		printf("[KO] : Your memcpy does not work with dst = empty\n");
		printf(DEFAULT);
	}
	else
	{
		printf(GREEN);
		printf("[OK]\n");
		printf(DEFAULT);
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
