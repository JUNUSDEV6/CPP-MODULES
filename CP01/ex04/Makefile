# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 12:21:17 by yohanafi          #+#    #+#              #
#    Updated: 2024/12/05 15:55:22 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed

CC	= c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC	= Sed.cpp main.cpp 

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
