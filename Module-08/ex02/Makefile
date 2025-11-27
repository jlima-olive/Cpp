
CXX			= c++

CXXFLAGS	= -I. -Wall -Wextra -Werror -std=c++98

SRC_FILES	= main.cpp MutantStack.cpp

OBJ_FILES	= ${SRC_FILES:.cpp=.o}

NAME		= main

all: ${NAME}

${NAME}: $(OBJ_FILES) Makefile
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $@

clean:
	rm -fr $(OBJ_FILES)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: fclean clean re all