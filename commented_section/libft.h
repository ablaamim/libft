/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:19:58 by ablaamim          #+#    #+#             */
/*   Updated: 2021/11/10 10:20:01 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/ *
** CREATE OUR INCLUDE
* /

/* 	defines the name of our lib */
# ifndef LIBFT_H
# define LIBFT_H

/* 	include our libraries and our functions */
# include <unistd.h>
# include <stdlib.h>

/ *
** PART I
* /
int 		ft_atoi ( const  char * str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t memb, size_t size);
int 		ft_isalnum ( int c);
int 		ft_isalpha ( int c);
int 		ft_isascii ( int c);
int 		ft_isdigit ( int c);
int 		ft_isprint ( int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t n);
char	*ft_strchr(const char *src, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *src, int c);
int		ft_tolower(char c);
int 		ft_toupper ( char c);

/ *
** PART II
* /
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void 	ft_putendl_fd ( char * s, int fd);
void 	ft_putnbr_fd ( int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
void 	ft_striteri ( char * s, void (* f) ( unsigned  int , char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);

