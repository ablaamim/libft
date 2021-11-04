/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:16:19 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/04 09:59:03 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*my_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstc;
	unsigned char	*srcc;
	size_t			i;

	i = 0;
	if ((dst == NULL) || (src == NULL))
		return (NULL);
	dstc = (unsigned char *) dst;
	srcc = (unsigned char *) src;
	while (i < n)
	{
		dstc[i] = srcc[i];
		i++;
	}
	return (dst);
}
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dstc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	i = 1;
	if (srcc < dstc)
	{
		while (i <= len)
		{
			dstc[len - i] = srcc[len - i];
			i++;
		}
	}
	else
		my_memcpy(dstc, srcc, len);
	return (dst);
}
