/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:27:37 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:04:15 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RETURN THE FIRST OCCURRENCE OF A CHARACTER WITHIN THE FIRST 'n' \
** YOU ENCOUNTER IN ASTRING
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *)s;
	if (s == NULL)
		return (NULL); /* Protection from NULL*/
/* As long as our 'n' is different from 0 we will keep looking for the character
 ** passed as a parameter inside our source buffer
 **/
	while (n--)
	{
		if (src[i] == (unsigned char)c)
/* We will return our source from the first occurrence of our char c */
			return (src + i);
		i++;
	}
/* If the character passed as parameter is not found, or 'n' reaches 0 without finding 
 ** our character passed as parameter, we will return 0 
*/
	return (NULL);
}
