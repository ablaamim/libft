/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:32:50 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:32:51 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** CONCATENATE TWO STRINGS TO A SPECIFIC PASSED SIZE AS PARAMETER
* /

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

/* 	find out the length of our target string */
	len = ft_strlen (dest);
	i = len;
/* 	if the length of our target string is greater than the size 'size' passed as a parameter, we will return the total size of our source string in addition to the size of 'size' */
	if (len >= size)
		return (size + ft_strlen(src));
/* 	if the size of our target string is smaller than the 'size' size passed as a parameter, we will concatenate our strings   */
	while (src[i - len] != '\0' && i + 1 < size)
	{
		dest [i] = src [i - len];
		i++;
	}
	dest [i] = ' \ 0 ' ;
/* 	return the total length of our source string in addition to the total length of our target string */
	return (len + ft_strlen(src));
}
