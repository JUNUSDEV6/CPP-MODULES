# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 13:28:12 by yohanafi          #+#    #+#              #
#    Updated: 2025/02/26 11:56:19 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AForm

CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
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