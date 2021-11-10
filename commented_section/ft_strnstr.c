/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:34:48 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:34:49 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** FIND THE FIRST OCCURRENCE OF A STRING IN ANOTHER STRING UNTIL A DETERMI\
** SWIM PASSED SIZE AS PARAMETER
* /

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	size;

	size = ft_strlen(little);
/* 	if 'little' does not contain any characters, return 'big' */
	if (size == 0)
		return ((char *) big);
	if (only == 0 )
		return (0);
/* 	if 'big' is different from 'little' we will check some conditions, however when 'big' is equal to 'little' we will return 'big' from the position of the occurrence of 'little' */
	while (len-- && ft_strncmp(big, little, size) != 0)
	{
/* 	if 'little' has more characters than the 'len' parameter it becomes impossible\
you can find 'little' within 'big' */
		if (size > len)
			return (0);
/* 	if there is no occurrence of 'little' in 'big', return NULL */
		if (*big++ == '\0')
			return (0);
	}
	return ((char *) big);
}
