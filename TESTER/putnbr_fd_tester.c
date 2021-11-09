/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:58:17 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 17:59:01 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	main(void)
{
	ft_putnbr_fd(0, -1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MAX, 0);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MIN, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-1234, 2);
	write(1, "\n", 1);
	ft_putnbr_fd(1234, 2);
	write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
