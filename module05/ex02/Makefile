NAME = ex01

SOURCE = src
INCLUDE = -I ./include

SRC =   main.cpp \
        $(SOURCE)/Bureaucrat.cpp \
        $(SOURCE)/Form.cpp \
        $(SOURCE)/ShrubberyCreationForm.cpp \
        $(SOURCE)/RobotomyRequestForm.cpp \
        $(SOURCE)/PresidentialPardonForm.cpp

OBJ = $(SRC:%.cpp=%.o)


CFLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(OBJ) -o $(NAME)

%.o: %.cpp
	c++ -c  $(INCLUDE) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

.PHONY: clean fclean all re
re:     fclean all