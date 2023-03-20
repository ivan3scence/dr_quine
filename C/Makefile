COLLEEN = Colleen

COL_SRC = Colleen.c

COL_OBJ = ${patsubst %.c, %.o, ${COL_SRC}}

CC = cc

CFLAGS = -fsanitize=address

all: 	${COLLEEN}

${COLLEEN}: 	${COL_OBJ}
	${CC} ${CFLAGS} $? -o $@

%.o:	%.c
	${CC} -c ${CFLAGS} $< -o ${<:.c=.o}

clean:
	rm -f ${COL_OBJ}

fclean:	clean
	rm -f ${COLLEEN}

re:		fclean all
