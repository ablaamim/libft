/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:16:19 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 00:12:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cdst;
	const char	*csrc;
	char		*revdst;
	const char	*revsrc;

	cdst = dst;
	csrc = src;
	revdst = cdst + (len - 1);
	revsrc = csrc + (len - 1);
	if (dst == src || len == 0)
		return (dst);
	if (!dst || !src)
		return (NULL);
	if (dst < src)
		while (len--)
			*cdst++ = *csrc++;
	else
		while (len--)
			*revdst-- = *revsrc--;
	return (dst);
}
