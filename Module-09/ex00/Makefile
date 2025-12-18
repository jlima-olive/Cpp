
SRC_FILES =	BitcoinExchange.cpp main.cpp

OBJ_FILES =	${SRC_FILES:.cpp=.o}

CXX =		c++

CXXFLAGS = -I. -std=c++98
# -Wall -Wextra -Werror

NAME =		btc

all: ${NAME}

${NAME}: ${OBJ_FILES}
	${CXX} ${CXXFLAGS} ${OBJ_FILES} -o ${NAME}

clean:
	rm -fr ${OBJ_FILES}

fclean: clean
	rm -fr ${NAME}

re: fclean all

