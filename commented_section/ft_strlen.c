/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:17:24 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:34:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
/* 	as long as my 's' string doesn't reach the end we will increment our account\
dor 'i' */
	while (s[i] != 0)
		i++;
/* 	our 'i' counter has the length of our string */
	return (i);
}

