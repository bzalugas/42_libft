#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 16:22:14 by bazaluga          #+#    #+#              #
#    Updated: 2023/09/04 17:46:19 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

SRCB	=	ft_lstnew.c

OBJ		=	$(SRC:.c=.o)

OBJB	=	$(SRCB:.c=.o)

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME):	$(OBJ)
			ar -rcs $(NAME) $(OBJ)

all:		$(NAME)

bonus:		$(NAME) $(OBJB)
			ar -rcs $(NAME) $(OBJB)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
