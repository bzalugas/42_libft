#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 16:22:14 by bazaluga          #+#    #+#              #
#    Updated: 2023/09/04 16:34:48 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SRC		=	ft_isalpha.c

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
