/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:46:18 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 09:46:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** CONVERT AN INT CHARACTER TO A CHAR TYPE
* /

#include "libft.h"

/* 	function used exclusively to return the largest negative number */
char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = ' \ 0 ' ;
		i++;
	}
	return (dest);
}

/* 	function that returns the length of our string of integers */
int 	ft_intsize ( int n)
{
	size_t	i;

/* 	if our character is negative we must guarantee the allocation of additional space in our memory for the '-' character */
	if (n < 0)
		i = 1;
	else
		i = 0;
	while (n != 0)
	{
		i++;
/* 	to count the number of characters we will change the value of 'n' at each loop */
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

/* 	our size will count the number of characters in our string of type int */
	size = ft_intsize(n);
/* 	we will guarantee a "clean" memory allocation to our string */
	str = ft_calloc(size, sizeof(char));
	if (n == -2147483648)
		return (ft_strncpy(str, "-2147483648\0", 12));
	if (n == 0)
	{
		str [ 0 ] = ' 0 ' ;
		return (str);
	}
/* 	if our int type character is negative we will add the '-' character to our string */
	if (n < 0)
	{
		n = n * - 1 ;
		str [ 0 ] = ' - ' ;
	}
/* 	we will add a null character '\0' to the last position of our string */
	str[size--] = '\0';
	while (n > 0)
	{
/* 	from the last position of our string we will add the value of 'n' converted as a character of type char */
		str[size--] = n % 10 + '0';
/* 	to count the number of characters we will change the value of 'n' at each loop */
		n = n / 10;
	}
	return (str);
}
