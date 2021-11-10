/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:38:46 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:38:48 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/ *
** COPY A STRING FROM THE 'start' POSITION TO A SPECIFIC SIZE PAS/
** SAVE AS PARAMETER
* /

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	if (s == 0)
		return (0);
/* 	if our starting position is beyond or at the end of our string, we will return " " */
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
/* 	to perform a safe memory allocation, if the length of our string 's' is smaller than 'len', we will "change" the size of len, making it the size of our string 's' */
	if (ft_strlen(s) < len)
		len = ft_strlen (s);
/* 	allocate memory for our new string */
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == 0)
		return (0);
/* 	copy the string 's' to our new string */
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
