/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:52:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:23:18 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	len;
	size_t	i;

	if (dst == NULL)
		return (0);
	len = ft_strlen(dst);
	i  = len;
	if (len >= size)
		return (size + ft_strlen(src));
	while (src[i - len] != '\0' && i + 1 < size)
	{
		dst[i] = src[i - len];
		i++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
