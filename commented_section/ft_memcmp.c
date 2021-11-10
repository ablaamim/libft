/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:29:23 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:29:24 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** RETURN THE DIFFERENCE BETWEEN TWO STRINGS WITHIN YOUR FIRST 'n' CHARACTERS
* /

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*joao;
	char	*maria;

	i = 0;
	joao = (char *)s1;
	maria = (char *)s2;
/* 	as long as 'n' is different from 0 and our string 1 is different from string 2 we will remain in the loop */
	while (n--)
	{
		if (joao[i] != maria[i])
/* 	we will return the difference between s1 and s2 ~#see values ​​below */
			return ((unsigned char) joao[i] - (unsigned char) maria[i]);
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
© 2021 GitHub, Inc.
Terms
Privacy

