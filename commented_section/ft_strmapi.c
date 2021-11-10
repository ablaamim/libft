/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:44:08 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:44:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** CREATE A NEW STRING THAT IS THE RESULT OF ITERATING A STRING TO ONE ** FUNCTION
* /

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == 0 && f == 0)
		return (NULL);
/* 	allocate enough memory so that our new string can receive the contents of our string's iteration s */
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str == 0)
		return (NULL);
	i = 0;
/* 	character by character perform the function iteration */
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str [i] = ' \ 0 ' ;
	return (str);
}
