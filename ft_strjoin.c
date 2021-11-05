/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:38:04 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/05 15:50:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	my_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

size_t	my_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	if (dst == NULL)
		return (0);
	src_len = my_strlen(src);
	if (dstlen)
	{
		while (*src)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ccat;
	int		len_s1;
	int		len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = (my_strlen((char *)s1));
	len_s2 = (my_strlen((char *)s2));
	ccat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (ccat == NULL)
		return (NULL);
	my_strlcpy(&ccat[0], s1, len_s1 + 1);
	my_strlcpy(&ccat[len_s1], s2, len_s2 + 1);
	return (ccat);
}
