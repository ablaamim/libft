/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 14:56:18 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/08 18:58:05 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ps;

	ps = NULL;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			ps = (char *)s;
		++s;
	}
	if (*s == (char)c)
		ps = (char *)s;
	return (ps);
}
