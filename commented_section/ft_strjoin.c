/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:40:27 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:40:29 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** CONCATENATE TWO STRINGS
* /

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0 ;
/* 	allocate memory space so that our new string receives the 's' content in its entirety */
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == 0)
		return (0);
/* 	copy the first string in its entirety to our new string */
	while (s1[j] != '\0')
	{
		str[i] = s1[j];
		i++;
		j ++;
	}
	j = 0 ;
/* 	copy the second string in its entirety to our new string */
	while (s2[j] != '\0')
	{
		str [i] = s2 [j];
		i++;
		j ++;
	}
	str [i] = ' \ 0 ' ;
	return (str);
}