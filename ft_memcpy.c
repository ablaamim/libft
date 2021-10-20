/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:24:09 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/20 13:38:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;

	if (!dest && !src)
		return (NULL);
	pd = (unsigned char *) dest;
	while (n--)
		*(pd++) = *(unsigned char *)(src++);
	return (dest);
}
