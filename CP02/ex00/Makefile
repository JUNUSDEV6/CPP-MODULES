# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 13:43:16 by yohanafi          #+#    #+#              #
#    Updated: 2024/12/21 15:53:39 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Canonical

CC	= c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC	= main.cpp Fixed.cpp 

OBJECTS	= $(SRC:.cpp=.o)

RM = rm -f

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJECTS)
			$(CC) $(OBJECTS) -o $(NAME)

all:	$(NAME)

clean:	clean
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
