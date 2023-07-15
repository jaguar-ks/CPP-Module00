# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/15 14:37:23 by faksouss          #+#    #+#              #
#    Updated: 2023/07/15 16:52:54 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lbanka

SRC = Account.cpp tests.cpp

SRCS = $(patsubst %, src/%, $(SRC))

# x:
# 	@echo $(OBJS)

OBJDIR = obj

OBJS = $(patsubst %, $(OBJDIR)/%, $(SRC:.cpp=.o))

HEADER = Account.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

$(OBJDIR)/%.o: src/%.cpp $(HEADER)
	mkdir -p obj
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SILENT: $(OBJS) $(NAME) all clean fclean re
