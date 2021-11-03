/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 06:50:03 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/03 19:34:56 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		ret_atoi;
	int		ret_ft_atoi;
	char	str0[] = {"           -12342sp24321"};
	char	str1[] = {"           +12342sp24321"};
	char	str2[] = {"           --12342sp24321"};
	char	str3[] = {"           -+12342sp24321"};
	char	str4[] = {"           +-12342sp24321"};
	char	str5[] = {"           ++12342sp24321"};
	char	str6[] = {"  \t +-+-12342sp24321"};
	char	str7[] = {"-      12342sp24321"};
	char	str8[] = {"+      12342sp24321"};
	char	str9[] = {"-12342sp24321"};
	char	str10[] = {"+12342sp24321"};
	char	str11[] = {"  \t sp12342sp24321"};
	char	str12[] = {"sp12342sp24321"};

	/**************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR ATOI FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	/**************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_atoi = atoi(str0);
	ret_ft_atoi = ft_atoi(str0);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_atoi = atoi(str1);
	ret_ft_atoi = ft_atoi(str1);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
// TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 --------------------\n", DEFAULT);
	ret_atoi = atoi(str2);
	ret_ft_atoi = ft_atoi(str2);
	//printf("%d %d\n", ft_atoi(str2), atoi(str2));
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 4
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	ret_atoi = atoi(str3);
	ret_ft_atoi = ft_atoi(str3);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 5
	printf("%s%s%s", GREEN, "------------------ TEST 5 -------------------\n", DEFAULT);
	ret_atoi = atoi(str4);
	ret_ft_atoi = ft_atoi(str4);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
    // TEST 6
    printf("%s%s%s", GREEN, "------------------ TEST 6 -------------------\n", DEFAULT);
	ret_atoi = atoi(str5);
	ret_ft_atoi = ft_atoi(str5);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 7
	printf("%s%s%s", GREEN, "------------------ TEST 7 -------------------\n", DEFAULT),
	ret_atoi = atoi(str6);
	ret_ft_atoi = ft_atoi(str6);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 8
	printf("%s%s%s", GREEN, "------------------ TEST 8 -------------------\n", DEFAULT);
	ret_atoi = atoi(str7);
	ret_ft_atoi = ft_atoi(str7);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 9
	printf("%s%s%s", GREEN, "------------------ TEST 9 -------------------\n", DEFAULT);
	ret_atoi = atoi(str8);
	ret_ft_atoi = ft_atoi(str8);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 10
	printf("%s%s%s", GREEN, "------------------ TEST 10 ------------------\n", DEFAULT);
	ret_atoi = atoi(str9);
	ret_ft_atoi = ft_atoi(str9);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 11
	printf("%s%s%s", GREEN, "------------------ TEST 11 ------------------\n", DEFAULT);
	ret_atoi = atoi(str10);
	ret_ft_atoi = ft_atoi(str10);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 12
	printf("%s%s%s", GREEN, "------------------ TEST 12 ------------------\n", DEFAULT);
	ret_atoi = atoi(str11);
	ret_ft_atoi = ft_atoi(str11);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
    sleep(1);
// TEST 13
	printf("%s%s%s", GREEN, "------------------ TEST 13 ------------------\n", DEFAULT);
	ret_atoi = atoi(str12);
	ret_ft_atoi = ft_atoi(str12);
	if (ret_atoi == ret_ft_atoi)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
        else
            printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "----------------------------------------------\n", DEFAULT);
	sleep(1);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
