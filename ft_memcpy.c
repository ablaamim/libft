/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:24:09 by ablaamim          #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
/*   Updated: 2021/11/10 13:34:14 by ablaamim         ###   ########.fr       */
=======
/*   Updated: 2021/11/10 13:00:13 by hnaji-el         ###   ########.fr       */
>>>>>>> b588523d672126638e36e8deeb93ec792f7962d9
=======
/*   Updated: 2021/11/10 13:00:13 by hnaji-el         ###   ########.fr       */
>>>>>>> b588523d672126638e36e8deeb93ec792f7962d9
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
