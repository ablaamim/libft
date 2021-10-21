/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tolower_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:05:20 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/21 14:12:39 by ablaamim         ###   ########.fr       */
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
	int		ret_tolower;
	int		ret_ft_tolower;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};

	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TEST -------------------\n", DEFAULT);
	while (index < 10)
	{
		ret_tolower = tolower(my_test_list[index]);
		ret_ft_tolower = ft_tolower(my_test_list[index]);
		if (ret_tolower == ret_ft_tolower)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		else
			printf("%s%s%s", RED, "[KO]\n", DEFAULT);
		++index;
	}
	printf("%s%s%s", GREEN, "-------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
