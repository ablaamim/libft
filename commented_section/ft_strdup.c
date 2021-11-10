/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:12:42 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 10:12:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** COPY TWO STRINGS TO A SPECIFIC PASSED SIZE AS PARAMETER
* /

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (size != 0)
	{
/* 	as long as size is different from 0 and our source contains characters, we will copy each character from source to our destination */
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest [i] = ' \ 0 ' ;
	}
/* 	return the size of our string source */
	return (ft_strlen(src));
}