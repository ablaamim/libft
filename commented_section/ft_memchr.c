/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:27:37 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:27:42 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** RETURN THE FIRST OCCURRENCE OF A CHARACTER WITHIN THE FIRST 'n' FACE\
** YOU HAVE A STRING
* /

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
/* 	as long as our 'n' is different from 0 we will keep looking for the character\re passed as a parameter in our source */
	while (n--)
	{
		if (src[i] == (unsigned char)c)
/* 	we will return our source from the first occurrence of our guy\ having passed it as a parameter */
			return (src + i);
		i++;
	}
/* 	if the character passed as parameter is not found, or 'n' reaches 0 without finding our character passed as parameter, we will return 0 */
	return (0);
}
