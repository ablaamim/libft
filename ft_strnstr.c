/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 05:20:35 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 16:29:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (needle[j++] == haystack[i])
		{
			while (needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (!needle[j] && (i + j) <= len)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
