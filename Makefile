#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bazaluga <bazaluga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/04 16:22:14 by bazaluga          #+#    #+#              #
#    Updated: 2023/12/03 20:22:47 by bazaluga         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	libft.a

SRC		=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
			ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
			ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
			ft_atoi.c ft_calloc.c ft_strdup.c\
			\
			ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
			ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c\
			\
			ft_isspace.c ft_strndup.c

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

ifneq ($(shell uname), Darwin)
breaker:
			$(CC) -nostartfiles -shared -fPIC -ldl $(CFLAGS) -o libft.so $(SRC)
else
breaker:
			$(CC) -dynamiclib $(CFLAGS) -o libft.so $(SRC) -L../obj -lmalloc
endif

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)
			rm -f *.out
			rm -f libft.so

re:			fclean all

.PHONY:		all clean fclean re
