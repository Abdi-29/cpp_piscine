NAME = weapon

SRC = 	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

INCLUDE = -I ./include
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

.PHONY: clean fclean re all
re:	fclean all