/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:30:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RETURN OUR STRING ON THE FIRST OCCURRENCE OF A CHARACTER PASSED AS \
** PARAMETRE 
*/

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
/* When our string hits the 'c' character we will return it + the i time when it does*/
		if (src[i] == (char)c)
			return ((char *)src + i);
		i++;
	}
/* Ensure that we return our string upon hitting the 'c' character */
	if (src[i] == (char)c)
		return ((char *)src + i);
	return (0);
}
