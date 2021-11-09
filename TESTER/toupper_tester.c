/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:12:57 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 08:30:05 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	int		ret_toupper;
	int		ret_ft_toupper;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};

/******************************************************************************/
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR TOUPPER FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------------------------------------\n", DEFAULT);
/******************************************************************************/
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TEST -------------------\n", DEFAULT);
	while (index < 10)
	{
		ret_toupper = toupper(my_test_list[index]);
		ret_ft_toupper = ft_toupper(my_test_list[index]);
		if (ret_toupper == ret_ft_toupper)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		else
			printf("%s%s%s", RED, "[KO]\n", DEFAULT);
		++index;
	}
	printf("%s%s%s", GREEN, "--------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
