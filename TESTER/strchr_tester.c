/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:46:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 08:34:40 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	(void)	argv;
	(void)	argc;
	char	*ret_strchr;
	char	*ret_ft_strchr;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};
	char	str[13] = {"Hello world!"};

	/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR STRCHR FUNCTION : \n", DEFAULT);
/******************************************************************************/
// TESTS
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TESTS ------------------\n", DEFAULT);
	while (index < 10)
	{
		ret_strchr = strchr(str, my_test_list[index]);
		ret_ft_strchr = ft_strchr(str, my_test_list[index]);
		if (ret_strchr == ret_ft_strchr)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		else
			printf("%s%s%s", RED, "[KO]\n", DEFAULT);
		++index;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
