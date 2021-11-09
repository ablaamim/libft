/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:52:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/09 08:43:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	if (dst == NULL)
		return (0);
	src_len = (ft_strlen(src));
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		++dst_len;
	if (dstsize == dst_len)
		return (src_len + dstsize);
	dst += dst_len;
	while (*src && --dstsize > dst_len)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}
