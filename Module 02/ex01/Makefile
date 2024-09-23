# C++ Flags / Variables
CPP = c++
CFLAGS = -Wall -g -std=c++98 # -Wextra -Werror
RM = rm -rf

# Project name
NAME = moreUsefulFxpNoClass
SRC = main.cpp Fixed.cpp

OBJDIR = bin
OBJ = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

# RULES
all: $(NAME)

$(NAME): $(OBJ)
		$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)/%.o: %.cpp
		mkdir -p $(@D)
		$(CPP) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJ)

fclean:
		$(RM) $(OBJ) $(NAME) $(OBJDIR)

re: fclean all

.SILENT:

.PHONY: all clean fclean re