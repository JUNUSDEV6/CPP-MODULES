# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/15 18:11:10 by yohanafi          #+#    #+#              #
#    Updated: 2025/08/04 14:24:39 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyFind

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC = main.cpp
OBJECTS = $(SRC:.cpp=.o)

RM = rm -f

%.o: %.cpp .tpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
		$(CC) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
		$(RM) $(OBJECTS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re