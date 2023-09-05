#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/05 15:24:21 by bazaluga          #+#    #+#              #
#    Updated: 2023/09/05 20:17:19 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFT	=	../libft.a

NAME 	=	libftest

SRC	 	=	$(wildcard *.c) $(wildcard tests/*.c)

OBJ	 	=	$(SRC:.c=.o)

CC	 	=	cc

CFLAGS	=	-Wall -Wextra -Werror

INCLUDES	=	-L.. -lft

all:		$(NAME)
			./$(NAME)

$(LIBFT):
			make -C ..

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INCLUDES)

$(NAME):	$(LIBFT) $(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(INCLUDES)

clean:
			rm -f $(NAME) $(OBJ)

re:			clean all

.PHONY:		all clean $(LIBFT)
