# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 19:14:49 by ftomaz-c          #+#    #+#              #
#    Updated: 2023/08/21 23:40:40 by ftomaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail

SRC =	srcs/main.c			\
		srcs/ft_tail.c		\
		srcs/ft_atoi.c		\
		srcs/ft_putchar.c	\
		srcs/ft_putstr.c	\

OBJ = $(SRC:.c=.o)
INCLUDES = includes/ft_tail.h
CFLAGS = -Wall -Wextra -Werror -ulimit
CC = cc
REMOVE = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -I $(INCLUDES)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean
