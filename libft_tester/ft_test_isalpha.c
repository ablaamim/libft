/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:22:37 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/18 09:58:39 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int		ret_isalpha;
	int		ret_ft_isalpha;
	int		index;
	char	my_test_list[9] = { '0', '*', '%', 'z', '\n', '\0', '9' , '\r', 'a'};
	char	ltr;

	ltr = 'a';
	index = 0;
	while (index < 9)
	{
		ret_isalpha = isalpha(my_test_list[index]);
		ret_ft_isalpha = ft_isalpha(my_test_list[index]);
		if (ret_isalpha == ret_ft_isalpha)
			printf("\033[92mTest %2.i - OK \033[0m\n", index + 1);
		else
			printf("\033[91mTest %2.i - KO \033[0m\n", index + 1);
		++index;
	}
	printf("Some tests are not 'OK' because system function returns other than 1.\n");
	printf("IMPLEMENTATION : %d\n", ft_isalpha(ltr));
	printf("SYSTEM : %d\n", isalpha(ltr));
	return (0);
}
