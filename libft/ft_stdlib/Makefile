# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/13 21:04:47 by yarroubi          #+#    #+#              #
#    Updated: 2021/05/05 14:55:35 by youness          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_stdlib.a

SRC = ft_atoi.c \
	  ft_calloc.c \
	  ft_iswap.c \
	  ft_itoa.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):$(OBJ)
	@ar -rc $(NAME) $(OBJ) ; ranlib $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
