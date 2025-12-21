SRC_FILES =	main.cpp RPN.cpp

OBJ_FILES =	${SRC_FILES:.cpp=.o}

CXX =		c++

CXXFLAGS =	-Wextra -Werror -Wall -std=c++98 -I.

NAME =		RPN

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ_FILES)

clean:
	rm -fr $(OBJ_FILES)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: clean fclean re all