/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:39:33 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:39:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** COPY A STRING FROM THE FIRST OCCURRENCE OF A PAST CHARACTER
** AS A PARAMETER UNTIL ITS LAST OCCURRENCE
* /

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	end;
	char			*str;

/* 	if there is no content in our strings we must return NULL */
	if (!s1 || !set)
		return (NULL);
/* 	look for the first occurrence of our 'set' character passed as parame/tro, leaving its "stored" position inside our pointer */
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1 ++;
	end = ft_strlen(s1);
/* 	look for the last occurrence of our 'set' character passed as parame/tro, leaving its "stored" position inside our variable */
	while (ft_strchr(set, s1[end]) && end != 0 )
		end--;
/* 	copy our start string to our end string */
	str = ft_substr(s1, 0, end + 1);
	return (str);
}
