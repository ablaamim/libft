/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:30:31 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 14:07:46 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RETURN OUR STRING ON THE FIRST OCCURRENCE OF A CHARACTER PASSED AS \
** PARAMETRE 
*/

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	if (src == NULL) /* PROTECTION FROM NULL*/
		return (NULL);
	while (*src)
	{
/* When our string hits the 'c' character we will return a pointer to char*/
		if (*src == (char) c)
			return ((char *) src);
		src++;
	}
/* Ensure that we return our string upon hitting the 'c' character */
	if (*src == (char)c)
		return ((char *)src);
	return (0);
}
