/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:05:21 by root              #+#    #+#             */
/*   Updated: 2021/10/27 13:18:38 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*rev_print(char *str)
{
	unsigned int	len;

	len = ft_strlen(str);
	while (len + 1 > 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	return (str);
}

int	main(void)
{
	rev_print("Reverse me");
	write(1, "\n", 1);
	return (EXIT_SUCCESS);
}
