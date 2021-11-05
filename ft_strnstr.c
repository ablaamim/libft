/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 05:20:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/05 16:21:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_strlen(const char *s)
{
	size_t	len;

	len  = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	my_strncmp(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (dst[i] && src[i] && dst[i] == src[i] && n--)
		i++;
	return ((unsigned char) dst[i] - (unsigned char) src[i]);
}

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_len;

	if (!needle[0])
		return ((char *)haystack);
	needle_len = my_strlen(needle);
	while (*haystack && len-- >= needle_len)
	{
		if (!my_strncmp(haystack, needle, needle_len))
			return ((char *)haystack);
		++haystack;
	}
	return (NULL);
}
