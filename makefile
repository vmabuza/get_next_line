# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/27 13:11:47 by vmabuza           #+#    #+#              #
#    Updated: 2019/08/07 16:53:38 by vmabuza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = gnl.a

SRC = get_next_line.c

OBJ = $(subst .c,.o,$(SRC))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re

