/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlenSEGFAULT_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 14:25:49 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/31 14:28:12 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	printf("%zu\n", ft_strlen(NULL));
	return (EXIT_SUCCESS);
}
