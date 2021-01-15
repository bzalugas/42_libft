#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bzalugas <bzalugas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 16:01:33 by bzalugas          #+#    #+#              #
#    Updated: 2021/01/15 20:11:32 by bzalugas         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS	= ft_atoi.c

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

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
