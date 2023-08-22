# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftomaz-c <ftomaz-c@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/21 19:14:49 by ftomaz-c          #+#    #+#              #
#    Updated: 2023/08/21 19:45:13 by ftomaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC =	srcs/ft_display_file.c	\
		srcs/ft_error.c			\
		srcs/ft_main.c			\
		srcs/ft_putchar.c		\
		srcs/ft_putstr.c		\

OBJ = $(SRC:.c=.o)
INCLUDES = includes/ft_display_file.h
CFLAGS = -Wall -Wextra -Werror
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
