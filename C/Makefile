COLLEEN = Colleen

GRACE = Grace

SULLY = Sully

COL_SRC = Colleen.c

GRA_SRC = Grace.c

SUL_SRC = Sully.c

COL_OBJ = ${patsubst %.c, %.o, ${COL_SRC}}

GRA_OBJ = ${patsubst %.c, %.o, ${GRA_SRC}}

SUL_OBJ = ${patsubst %.c, %.o, ${SUL_SRC}}

CC = cc

CFLAGS = -g -fsanitize=address

all: 	${COLLEEN} ${GRACE} ${SULLY}

${COLLEEN}: 	${COL_OBJ}
	${CC} ${CFLAGS} $? -o $@

${GRACE}: 	${GRA_OBJ}
	${CC} ${CFLAGS} $? -o $@

${SULLY}: 	${SUL_OBJ}
	${CC} ${CFLAGS} $? -o $@

%.o:	%.c
	${CC} -c ${CFLAGS} $< -o ${<:.c=.o}

clean:
	rm -f ${COL_OBJ} ${GRA_OBJ} ${SUL_OBJ}

fclean:	clean
	rm -f ${COLLEEN} ${GRACE} ${SULLY} Sully_*

re:		fclean all
