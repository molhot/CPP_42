NAME = ex01
CC = g++ -std=c++98
SRCS = Animal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

${NAME}:${OBJS}
	${CC} ${OBJS} -o ${NAME}

fclean:
	rm ex01