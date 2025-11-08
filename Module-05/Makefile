
CXX			= cc

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC_FILES	= Bureaucrat.cpp main.cpp

OBJ_FILES	= ${SRC_FILES:.cpp=.o}

NAME		= Bureaucrat

all: ${NAME}

${NAME}: $(OBJ_FILES) Makefile
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -fr $(OBJ_FILES)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: fclean clean re all