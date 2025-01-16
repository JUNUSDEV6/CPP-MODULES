# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/15 13:10:50 by yohanafi          #+#    #+#              #
#    Updated: 2025/01/16 17:32:16 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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