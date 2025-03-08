# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youneshanafi <youneshanafi@student.42.f    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 13:28:12 by yohanafi          #+#    #+#              #
#    Updated: 2025/03/08 16:32:29 by youneshanaf      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Converter

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC = main.cpp Base.cpp function.cpp
OBJECTS = $(SRC:.cpp=.o)

RM = rm -f

%.o: %.cpp
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