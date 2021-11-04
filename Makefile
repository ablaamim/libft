# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 19:39:18 by ablaamim          #+#    #+#              #
#    Updated: 2021/11/04 11:12:29 by ablaamim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
LIB			= ar -rcs
LIB1		= ranlib
RM			= /bin/rm -f

INCS		= libft.h
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			 ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c \
			ft_split.c ft_itoa.c \

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstdelone.c ft_lstclear.c ft_lstadd_back.c ft_lstiter.c \
			ft_lstmap.c

OBJS		= $(SRCS:.c=.o)
OBJS_BONUS	= $(SRCS_BONUS:.c=.o)

all: 		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(LIB)	$(NAME) $(OBJS)
			$(LIB1) $(NAME)

bonus:		$(NAME) $(OBJS_BONUS)
			$(LIB)	$(NAME) $(OBJS_BONUS)
			$(LIB1) $(NAME)

.c.o: 		
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:		
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
