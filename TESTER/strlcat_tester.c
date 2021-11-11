/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 11:13:57 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 22:44:34 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
# include <stddef.h>
# include <signal.h>
# include <stdbool.h>

pid_t pid;
bool has_segfault_ft;
bool has_segfault_org;

# define TEST_SEGFAULT(x,y) do { \
    if ((pid = fork()) < 0) \
        exit(EXIT_FAILURE); \
    if (pid == 0) { \
        do { x } while(0); \
        exit(EXIT_SUCCESS); \
    } else { \
        wait(&pid); \
        y = WIFSIGNALED(pid); \
    } \
} while(0);

#define TESTER(f) \
    TEST_SEGFAULT(f,has_segfault_org)\
    TEST_SEGFAULT(ft_##f,has_segfault_ft)\
        if(has_segfault_org != has_segfault_ft){\
            write(1,"\033[31m[KO]\033[0m(",13);\
            write(1,#f,strlen(#f));\
            write(1,") ",2);}\
        else\
            write(1,"\033[32m[OK]\033[0m ",13);\

int	main(void)
{
	char	str0_dst[13] = "Hello";
	char	str0_src[7] = "world!";
	char	str1_dst[13] = "Hello";
	char	str1_src[7] = "world!";
	char	str2_dst[13] = "Hello";
	char	str2_src[7] = "world!";
	char	str3_dst[13] = "Hello";
	char	str3_src[7] = "world!";
	char	str4_dst[13] = "Hello";
	char	str4_src[7] = "world!";
	char	str5_dst[13] = "Hello";
	char	str5_src[7] = "world!";
	size_t	ret_str0;
	size_t	ret_str1;
	size_t	ret_str2;
	size_t	ret_str3;
	size_t	ret_str4;
	size_t	ret_str5;

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRLCAT FUNCTION :\n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
// SEGFAULT TESTS
	printf("%s%s%s", GREEN, "------------- SEGFAULT TESTS ----------------\n", DEFAULT);
	TESTER(strlcat(NULL, NULL, 0);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULL", NULL, 0);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat(NULL, "NULL", 0);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULL", "NULL", 0);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat(NULL, NULL, 1);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULL", NULL, 1);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat(NULL, "NULL", 1);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULL", "NULL", 1);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULLO", NULL, 3);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat(NULL, "NULLO", 3);)
	printf("\n");
		usleep(250000);
	TESTER(strlcat("NULLO", "NULL", 3);)
	printf("\n");
		usleep(250000);
    printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_str0 = strlcat(str0_dst, str0_src, 13);
	ret_str1 = ft_strlcat(str1_dst, str1_src, 13);
	if (!strcmp(str0_dst, str1_dst) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED,  "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_str2 = strlcat(str2_dst, str2_src, 3);
	ret_str3 = ft_strlcat(str3_dst, str3_src, 3);
	if (!strcmp(str2_dst, str3_dst) && ret_str2 == ret_str3)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	ret_str4 = strlcat(str4_dst, str4_src, 5);
	ret_str5 = ft_strlcat(str5_dst, str5_src, 5);
	if (!strcmp(str4_dst, str5_dst) && ret_str4 == ret_str5)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
