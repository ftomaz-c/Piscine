# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 18:11:15 by ftomaz-c          #+#    #+#              #
#    Updated: 2023/08/22 18:41:50 by ftomaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRC =	srcs/main.c			\
		srcs/ft_atoi.c		\
		srcs/ft_ops.c		\
		srcs/ft_putchar.c	\
		srcs/ft_putnbr.c	\
		srcs/do_op.c		\
		srcs/ft_putstr.c

OBJ = $(SRC:.c=.o)
INCLUDES = /includes/do_op.h
CC = cc
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) -I $(INCLUDES)

clean:
	$(REMOVE) $(OBJ)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
