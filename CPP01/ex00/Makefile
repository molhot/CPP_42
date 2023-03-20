NAME = ex00
CC = g++ -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

${NAME}:${SRCS}
	${CC} ${SRCS} -fsanitize=address -fno-omit-frame-pointer -o ${NAME}

fclean:
	rm ${OBJS} ex00