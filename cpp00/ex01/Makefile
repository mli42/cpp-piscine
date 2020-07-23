# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mli <mli@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 23:54:54 by mli               #+#    #+#              #
#    Updated: 2020/07/23 22:32:38 by mli              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = awesomephonebook

CC = clang++
CFLAGS = -Wall -Wextra -Werror

SRCS_FILES = main.cpp PhoneBook.cpp

OBJS_PATH = ./obj/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS_FILES:.cpp=.o}}

all: ${NAME}

$(NAME): ${OBJS_PATH} ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${OBJS_PATH}:
	@mkdir -p $@

${OBJS_PATH}%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re work
