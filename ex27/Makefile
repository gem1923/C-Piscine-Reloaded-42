# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gperico- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 13:56:44 by gperico-          #+#    #+#              #
#    Updated: 2024/11/06 20:26:04 by gperico-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_display_file

SRC = ft_display_file.c

all: ${NAME}

${NAME}:
	${CC} ${CFLAGS} -o ${NAME} ${SRC}

clean: 
	rm -f *o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re all
