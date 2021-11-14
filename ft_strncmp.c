/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 08:54:10 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 00:08:04 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned int	i;

	if (!s1 || !s2 || !n)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1))
	{
		i++;
	}
	return (*(const unsigned char *)&s1[i] - *(const unsigned char *)&s2[i]);
}