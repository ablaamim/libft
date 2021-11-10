/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:44:52 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:44:55 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** ITERATES A STRING TO A FUNCTION
* /

#include "libft.h"

void 	ft_striteri ( char * s, void (* f) ( unsigned  int , char *))
{
	unsigned int	i;

	i = 0;
/* 	character by character perform the function iteration */
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}
