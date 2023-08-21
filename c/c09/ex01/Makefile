# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 17:02:05 by ftomaz-c          #+#    #+#              #
#    Updated: 2023/08/21 17:43:17 by ftomaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

LIB = ar -rcs

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = srcs/ft_putchar.c	srcs/ft_putstr.c	srcs/ft_strcmp.c	srcs/ft_strlen.c	srcs/ft_swap.c	\

OBJ = $(SRC:.c=.o)

INCLUDES = include/ft.h

REMOVE = rm -rf

%.o: %.c $(INCLUDES)
	$(CC)	$(CFLAGS)	-c $< -o $@

$(NAME): $(OBJ)
	$(LIB)	$(NAME)	$(OBJ)

all: $(NAME)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME);

re: fclean all

.PHONY: all clean fclean re
