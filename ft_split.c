/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:41:47 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/06 11:41:37 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int 	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_make_words(char *word, char const *s, int j, int word_ln)
{
	int 	i;

	i = 0;
	while (word_ln > 0)
		word[i++] = s[j - word_ln--];
	word[i] = '\0';
	return (word);
}

static char	**ft_split_words(char **res, char const *s, char c, int word_qt)
{
	int 		i;
	int 		j;
	int		word_ln;

	i = 0;
	j = 0 ;
	word_ln = 0;
	while (s[j] && i < word_qt)
	{
		while (s[j] && s[j] == c)
			j ++;
		while (s[j] && s[j] != c)
		{
			j ++;
			word_ln++;
		}
		res[i] = (char *)malloc(sizeof(char) * (word_ln + 1));
		if (!res[i])
			return (NULL);
		ft_make_words (res[i], s, j, word_ln);
		word_ln = 0;
		i++;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		word_qt;
	char	**res;

	if (s == 0)
		return (NULL);
	word_qt = ft_count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_qt + 1));
	if (!res)
		return (NULL);
	ft_split_words (res, s, c, word_qt);
	return (res);
}