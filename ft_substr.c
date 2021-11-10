/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 23:12:29 by ablaamim          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/11/10 19:10:00 by ablaamim         ###   ########.fr       */
=======
/*   Updated: 2021/11/10 13:02:26 by hnaji-el         ###   ########.fr       */
>>>>>>> b588523d672126638e36e8deeb93ec792f7962d9
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen < len)
		len = ft_strlen(s);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, (s + start), (len + 1));
	return (substr);
}
