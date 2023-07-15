# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 08:06:40 by faksouss          #+#    #+#              #
#    Updated: 2023/07/15 12:37:15 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

SRC = Contact.cpp PhoneBook.cpp main.cpp 

SRCS = $(patsubst %, src/%, $(SRC))

# x:
# 	@echo $(OBJS)

OBJDIR = obj

OBJS = $(patsubst %, $(OBJDIR)/%, $(SRC:.cpp=.o))

HEADER = inc/Contact.hpp inc/PhoneBook.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) -Iinc $^ -o $@

$(OBJDIR)/%.o: src/%.cpp $(HEADER)
	mkdir -p obj
	c++ $(FLAGS) -Iinc -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS) $(NAME) all clean fclean re
