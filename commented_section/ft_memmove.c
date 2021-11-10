/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:26:17 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 12:01:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** COPY THE CONTENT FROM SOURCE TO DEST WITHIN YOUR FIRST 'n' CHARACTERS
*/

/ *
** CHECK THE DIFFERENCE BETWEEN MEMCPY AND MEMMOVE
* /

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
/* 	assign variables to copy characters from source to dest from the first or last position of length 'n' */
	char		*cdst;
	const char	*cscr;
	char		*rev_dst;
	const char	*rev_src;

	cdst = dest;
	cscr = src;
	rev_dst = cdst + (n - 1);
	rev_src = cscr + (n - 1);
	if (dest == src || n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	if (dest < src)
/* 	copy from the first character to the character at position 'n' */
		while (n--)
			*cdst++ = *cscr++;
	else
/* 	copy from the last character to the character at position 'n' */
		while (n--)
			*rev_dst-- = *rev_src--;
	return (dest);
}

/*
	Even though the MEMCPY and MEMMOVE functions are similar, they have discrepancies\
	in the way they arrive at their expected result.
	The MEMCPY function does not overwrite the destination memory, that is, it can contain
	"garbage" in the course of its result.
	The MEMMOVE function overwrites the destination memory, therefore, in addition to being more secure the
	result obtained by her will have more precision.
*/
