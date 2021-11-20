# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psemsari <psemsari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/27 13:07:13 by psemsari          #+#    #+#              #
#    Updated: 2021/11/09 15:25:36 by psemsari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = out

FILES =	main.cpp\
		span.cpp

INCLUDES =	span.hpp

FILES_PATH =

IFLAGS = -I.

PREFIX = $(addprefix $(FILES_PATH), $(FILES))

OBJ = $(PREFIX:%.cpp=%.o)

CC = gcc
CXX = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

### COLORS ###

NOC = \033[0m
BOLD = \033[1m
UNDERLINE = \033[4m
BLACK = \033[1;30m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
VIOLET = \033[1;35m
CYAN = \033[1;36m
WHITE = \033[1;37m

all: 		$(NAME)

$(NAME): $(OBJ)
			@echo "$(CYAN)Constructing executable:$(NOC) $@"
			$(CXX) $(FLAGS) $(IFLAGS) -o $(NAME) $(OBJ)

%.o : %.cpp	${INCLUDES}
			@echo " $(VIOLET)[$(CXX)] $(GREEN)[$(FLAGS)]$(NOC) $(YELLOW)in progress ...:$(NOC) $< $(RED)->$(NOC) $@"
			$(CXX) $(FLAGS) $(IFLAGS) -c $< -o ${<:%.cpp=%.o}

clean:
	@echo "\n$(RED)Removing '.o' objects: $(NOC) $@"
	@rm -f $(OBJ)

fclean: clean
	@echo "\n$(RED)Removing executable: $(NOC) $@"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
