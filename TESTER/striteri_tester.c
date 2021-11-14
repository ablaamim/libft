/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_tester.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:01:33 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/14 20:00:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_striteri_ft(unsigned int	i, char	*c)
{
	*c = *c + i;
}

int	main(void)
{
	char	str0[] = "Hello world";
	char	str1[] = "1337 Benguerir";
	char	str2[] = "";
	char	str3[] = "0000000000";
	char	str4[] = "0000000000";

	ft_striteri(str0, ft_striteri_ft);
	ft_striteri(str1, ft_striteri_ft);
	ft_striteri(str2, ft_striteri_ft);
	ft_striteri(str3, ft_striteri_ft);
	ft_striteri(str4, 0);
	printf("%s\n", str0);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	return (EXIT_SUCCESS);
}
