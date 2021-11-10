/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:33:36 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:33:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** RETURN THE DIFFERENCE BETWEEN TWO STRINGS WITHIN YOUR FIRST 'n' CHARACTERS
* /

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
/* 	as long as 'n' is different from 0 and our string 1 is different from string 2 we will remain in the loop */
	while (n--)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
/* 	we will return the difference between s1 and s2 ~#see values ​​below */
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

/ *
	the returned values ​​should be:
	if s1 > s2 | we will return a positive value
	if s1 < s2 | we will return a negative value
	if s1 = s2 | we will return 0
* /
