PROJ		= main

NAME		= ${PROJ}.a

CXX			= c++

SRC_FILES	= ${PROJ}.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ_FILES	= ${SRC_FILES:.cpp=.o}

AR			= ar rcs

CXXFLAGS	= -std=c++98 -Wall -Wextra -Werror

all: $(PROJ)

$(PROJ): ${SRC_FILES} ${OBJ_FILES} Makefile
	$(CXX) ${CXXFLAGS} ${OBJ_FILES} -o ${PROJ}

clean:
	rm -fr $(OBJ_FILES)

fclean: clean
	rm -fr ${PROJ}

re: fclean all

r: re
	./${PROJ}

val: re
	clear
	valgrind --leak-check=full --trace-children=yes --show-leak-kinds=all ./${PROJ}

.PHONY: re fclean clean all val r

# so:



