#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 16:22:14 by bazaluga          #+#    #+#              #
#    Updated: 2023/11/13 16:01:29 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c

SRCB	=	ft_lstnew.c

OBJ		=	$(SRC:.c=.o)

OBJB	=	$(SRCB:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror -g

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<


$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

bonus:		$(NAME) $(OBJB)
			ar -rcs $(NAME) $(OBJB)

so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
			gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			rm -f *.out
			rm -f libft.so

re:			fclean all

.PHONY:		all clean fclean re
