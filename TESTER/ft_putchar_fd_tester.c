/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:49:02 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 19:49:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	ft_putchar_fd(-1, -1);
	ft_putchar_fd(-1, 0);
	ft_putchar_fd(0, -1);
	ft_putchar_fd(0, 0);
	ft_putchar_fd('e', 0);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('e', 2);
	return (EXIT_SUCCESS);
}
