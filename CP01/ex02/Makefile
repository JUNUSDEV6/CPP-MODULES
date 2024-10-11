# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/11 15:38:38 by yohanafi          #+#    #+#              #
#    Updated: 2024/10/11 15:39:27 by yohanafi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = BraiiiiiiinnnzzzZ333333

CC	= c++

CFLAGS = -Wall -Werror -Wextra -std=c++98 -Wpedantic

SRC	= main.cpp

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