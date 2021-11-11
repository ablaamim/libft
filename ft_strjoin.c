/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:38:04 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/11 14:47:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*scat;
	int		len_s1;
	int		len_s2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len_s1 = (ft_strlen((char *)s1));
	len_s2 = (ft_strlen((char *)s2));
	scat = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (scat == NULL)
		return (NULL);
	ft_strlcpy(&scat[0], s1, len_s1 + 1);
	ft_strlcpy(&scat[len_s1], s2, len_s2 + 1);
	return (scat);
}
