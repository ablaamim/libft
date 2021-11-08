/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:22:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/05 17:22:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	void	*ret_calloc;
	void	*ret_ft_calloc;

	ret_calloc = calloc(10, 4);
	ret_ft_calloc = ft_calloc(10, 4);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 4)))
		printf("\033[92mTest %2.i - OK \033[0m\n", 1);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 1);
	free(ret_calloc);
	free(ret_ft_calloc);

	ret_calloc = calloc(10, 1);
	ret_ft_calloc = ft_calloc(10, 1);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 1)))
		printf("\033[92mTest %2.i - OK \033[0m\n", 2);
	else
		printf("\033[91mTest %2.i - KO \033[0m\n", 2);
	free(ret_calloc);
	free(ret_ft_calloc);
	return (0);
}
