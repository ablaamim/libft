/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:29:23 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:26:49 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** RETURN THE DIFFERENCE BETWEEN TWO STRINGS WITHIN YOUR FIRST 'n' CHARACTERS
** AFTER COMPARING BYTE BY BYTE MEMORY AREAS.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ps1;
	char	*ps2;

	i = 0;
	ps1 = (char *)s1;
	ps2 = (char *)s2;
/* As long as 'n' is different from 0 and our string 1 is different from string 2 we will remain in the loop */
	while (n--)
	{
		if (ps1[i] != ps2[i])
/*	We will return the difference between s1 and s2*/
			return ((unsigned char) ps1[i] - (unsigned char) ps2[i]);
		i++;
	}
	return (0);
}

/*
	if s1 > s2 | we will return a positive value
	if s1 < s2 | we will return a negative value
	if s1 = s2 | we will return 0
*/

