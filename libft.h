/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:38:14 by ablaamim          #+#    #+#             */
/*   Updated: 2021/10/18 11:57:52 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define FT_SUCCESS 1
# define FT_FAILURE 0

/*  REMOVE LATER   */

# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define DEFAULT	"\033[0m"

/*********************/

# include <unistd.h>
# include <stdlib.h>

/* Part 1 */

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

#endif