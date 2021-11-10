/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:28:26 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:28:27 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memb, size_t size)
{
	void	*i;

/* 	allocate size 'memb' * 'size' bytes of memory to our variable 'i' */
	i = malloc(memb * size);
/* 	if the allocation goes wrong we must return NULL */
	if (i == 0)
		return (NULL);
/* 	use the bzero function to fill 'i' with null characters */
	ft_bzero(i, (memb * size));
	return (i);
}