# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gperico- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/05 15:39:56 by gperico-          #+#    #+#              #
#    Updated: 2024/11/06 13:54:45 by gperico-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(shell ls srcs/*.c)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HD = $(shell ls includes/*.h)

all: ${NAME}

${NAME}:
	${CC} ${CFLAGS} -c ${SRCS} ${HD}
	ar rc ${NAME} *.o

clean:
	rm -f *.o

fclean: clean
	rm -f ${NAME}
	rm -f ./includes/*.*gch

re: fclean all

.PHONY: all  clean fclean re
