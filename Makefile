#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 16:01:33 by bzalugas          #+#    #+#              #
#    Updated: 2021/01/18 23:00:27 by bzalugas         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
			ft_memcmp.c ft_strlen.c ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c \
			ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c \
			ft_calloc.c ft_strdup.c

MAIN	=	main.c

OBJM	=	$(MAIN:.c=.o)

TNAME	= test

OBJS 	= $(SRCS:.c=.o)

NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

AR		= ar rc

RM		= rm -f

.c.o: #equivalent a %.o: %.c
			$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

test:		$(NAME)
			$(CC) $(CFLAGS) -o $(TNAME) $(MAIN) -L. -lft

all:		$(NAME)

clean:
			$(RM) $(OBJS) $(OBJM)

fclean:		clean
			$(RM) $(NAME) $(TNAME)

re:			fclean all

.PHONY:		all clean fclean re test
#
#
#
#TEMPORAIRE :
#
# SRCS	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c \
# 			ft_memcmp.c ft_strlen.c ft_islower.c ft_isupper.c ft_isalpha.c ft_isdigit.c \
# 			ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
# 			ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_atoi.c main.c

# OBJS 	= $(SRCS:.c=.o)

# NAME	= libft

# CC		= cc
# CFLAGS	= -Wall -Wextra -Werror

# AR		= ar rc

# RM		= rm -f

# .c.o: #equivalent a %.o: %.c
# 			$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

# $(NAME):	$(OBJS)
# 			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

# all:		$(NAME)

# clean:
# 			$(RM) $(OBJS)

# fclean:		clean
# 			$(RM) $(NAME)

# re:			fclean all
