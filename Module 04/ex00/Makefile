# C++ Flags / Variables
CPP = c++
CFLAGS = -Wall -Wextra -Werror -g -std=c++98
RM = rm -rf

# Project name
NAME = polymorphism
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJDIR = .bin
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

# RULES
all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)
		echo "$(GREEN) Build completed. $(RESET)" ;

$(OBJDIR)/%.o: %.cpp
		mkdir -p $(@D)
		$(CPP) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:
		$(RM) $(OBJ) $(NAME) $(OBJDIR)
		echo "$(RED) Cleaned project files/folders. $(RESET)" ;

re: fclean all

.SILENT:

.PHONY: all clean fclean re