/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 09:41:34 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 11:30:59 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DIVIDING A STRING WHENEVER A PAST 'c' CHARACTER OCCURS
** AS PARAMETER
*/

#include "libft.h"

/* 	function to identify the number of strings to be subdivided */
int    ft_findstr(char const *str, char c)
{
    int        words;
    int         control;

    words = 0;
    control = 0;
    while (*str)
    {
/* 	whenever the next character in our string is different from the 'c' character and our 'control' variable is 0 we know that a new subdivision of our string must be created */
        if (*str != c && control == 0)
        {
            control = 1;
            words++;
        }
/* 	when the next character in our string is equal to our 'c' character, we change our 'control' variable to 0, letting the program know that we are reentering a subdivision */
        else if (*str == c)
            control = 0;
        str ++;
    }
/* 	return the total possible subdivisions */
    return (words);
}

/* 	function to duplicate our string ~#check ft_strdup */
char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == 0)
		return (0);
	str = (char *)malloc(sizeof(char) * n + 1);
	while (s[i] != '\0' && i < n)
	{
		str[i] = s[i];
		i++;
	}
	str [i] = '\0' ;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int 		i;
	int 		start;
	int 		end;
	char	**str;

/* 	allocate memory space so that our new string receives the contents of 's' after each division */
	str = (char **)malloc(sizeof(char *) * (ft_findstr(s, c) + 1));
	if (str == NULL)
		return (NULL);
	end = 0;
	i = 0;
	while (s[end] != '\0')
	{
/* 	find the first occurrence of 'c' in our string 's' */
		while (s[end] == c)
			end++;
/* 	set the starting position where 's' will be duplicated */
		start = end;
/* 	find the last occurrence of 'c' in our string 's' */
		while (s[end] != '\0' && s[end] != c)
			end++;
		if (end > start)
		{
/* 	copy the string that does not contain the 'c' character, thus causing it to be split */
			str[i] = ft_strndup(s + start, end - start);
			i++;
		}
	}
	str[i] = NULL;
	return (str);
}
