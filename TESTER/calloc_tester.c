/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:22:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 09:38:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	void	*ret_calloc;
	void	*ret_ft_calloc;
	(void)	argc;
	(void)	argv;

	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 4);
	ret_ft_calloc = ft_calloc(10, 4);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 4)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 1);
	ret_ft_calloc = ft_calloc(10, 1);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 1)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
