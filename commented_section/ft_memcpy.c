/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:15:39 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:23:04 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
** COPY THE CONTENT FROM SOURCE TO DEST WITHIN YOUR FIRST 'n' CHARACTERS
** CHECK THE DIFFERENCE BETWEEN MEMCPY AND MEMMOVE
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int 			i;
	char 		* pd;
	const char	*ps;

	i = 0;
	pd = ( char *) dest;
	ps = (char *)src;
	if (dest == NULL && src == NULL) /* Protection from NULL */
		return (NULL);
	if (pd == ps) /* Same pointer case*/
		return (NULL);
/* As long as 'n' is different from 0 we will copy memory area from source to dest */
	while (n > 0)
	{
		pd [i] = ps [i];
		i++;
		n--;
	}
	return (pd);
}

/*
	Even though the MEMCPY and MEMMOVE functions are similar, they have discrepancies\
	in the way they arrive at their expected result.
	The MEMCPY function does not overwrite the destination memory, that is, it can contain
	"garbage" in the course of its result.
	The MEMMOVE function overwrites the destination memory, therefore, in addition to being more secure the
	result obtained by her will have more precision.
*/
