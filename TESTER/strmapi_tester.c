/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_tester.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:01:05 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 20:02:45 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	ft_strmapi_ft(unsigned int	i, char	c)
{
	return (c + i);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[] = "Hello world";
	char	str1[] = "1337 BENGUERIR";
	char	str2[] = "";
	char	str3[] = "0000000000";

	printf("%s\n", ft_strmapi(str0, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str1, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str2, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(str3, ft_strmapi_ft));
	printf("%s\n", ft_strmapi(0, ft_strmapi_ft));
	return (EXIT_SUCCESS);
}
