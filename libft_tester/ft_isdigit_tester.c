/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_tester.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 09:29:24 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/18 09:51:11 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ret_isdigit;
	int		ret_ft_isdigit;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', '*', '%', '\n', '\0', '0', 'Z', '\r'};
	char	nbr;

	nbr = '9';
	index = 0;
	while (index < 10)
	{
		ret_isdigit = isdigit(my_test_list[index]);
		ret_ft_isdigit = ft_isdigit(my_test_list[index]);
		if (ret_isdigit == ret_ft_isdigit)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	printf("Some tests are not 'OK' because System function returns other than '1'.\n");
	printf("IMPLEMENTATION : %d\n", ft_isdigit(nbr));
	printf("SYSTEM : %d\n", isdigit(nbr));
	return (0);
}
