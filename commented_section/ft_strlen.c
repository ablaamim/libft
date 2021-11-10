/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:17:24 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:56:51 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
/* As long as my 's' string doesn't reach the NULL char in the string  we will increment our account\
dor 'i' */
	while (s[i] != 0)
		i++;
/* Our 'i' counter has the length of our string now, so we return it*/
	return (i);
}

