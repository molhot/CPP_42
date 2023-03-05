NAME = ex00
CC = g++ -std=c++98
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

${NAME}:${SRCS}
	${CC} ${SRCS} -o ${NAME}

fclean:
	rm ex00