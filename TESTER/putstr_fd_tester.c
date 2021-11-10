/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_fd_tester.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:57:11 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:17:41 by hnaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	ft_putstr_fd(0, -1);
	ft_putstr_fd(0, 0);
	ft_putstr_fd("Hello world\n", 0);
	ft_putstr_fd("Hello world\n", 1);
	ft_putstr_fd("Hello world\n", 2);
	return (EXIT_SUCCESS);
}
