# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/29 19:14:01 by vnaslund          #+#    #+#              #
#    Updated: 2024/02/04 13:43:00 by vnaslund         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

SOURCES = main.cpp Span.cpp

OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $^ -o $@

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re