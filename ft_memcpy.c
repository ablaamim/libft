/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:24:09 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 13:34:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pd;
	unsigned char	*ps;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	pd = (unsigned char *) dst;
	ps = (unsigned char *) src;
	while (n > 0)
	{
		pd[i] = ps[i];
		i++;
		n--;
	}
	return (dst);
}
