# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 10:29:58 by faksouss          #+#    #+#              #
#    Updated: 2023/07/14 11:50:45 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

NAME = megaphone

FLG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLG) $^ -o $@

%.o : %.cpp
	@c++ $(FLG) -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re

.SILENT : $(NAME) all fclean clean re
