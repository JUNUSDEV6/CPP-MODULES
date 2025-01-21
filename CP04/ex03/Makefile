# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 14:38:49 by yohanafi          #+#    #+#              #
#    Updated: 2025/01/21 14:39:58 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC = main.cpp MateriaSource.cpp Ice.cpp Cure.cpp Character.cpp AMateria.cpp
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