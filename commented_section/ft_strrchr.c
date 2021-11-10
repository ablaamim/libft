/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:11:10 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 10:11:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** RETURN OUR STRING ON THE LAST OCCURRENCE OF A CHARACTER PASSED AS PA\
** RAMETRO
* /

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	int 	i;

/* 	find the total length of our string so that from its last character we can look for an occurrence of 'c' */
	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	return (0);
}
