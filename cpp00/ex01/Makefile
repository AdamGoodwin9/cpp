NAME = phonebook

SRCS_DIR = ./src/
SRCS =	Main.cpp \
		Contact.cpp \
		PhoneBook.cpp

INCS_DIR = ./inc/

INCLUDE = -I$(INCS_DIR)
FLAGS = -Wall -Wextra -Werror $(INCLUDE) -std=c++98

OBJS_DIR 	= 	obj/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Deleting $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Deleting $(NAME)"
	@rm -f $(NAME)

re: fclean all