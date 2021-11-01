/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:11:30 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/01 16:30:54 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	my_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;

	len = my_strlen(s);
	if (s == NULL)
		return (NULL);
	dest = (char *) malloc(sizeof (*s) * (len + 1));
	while (*s)
		*dest++ = *s++;
	*dest = '\0';
	return (dest);
}
