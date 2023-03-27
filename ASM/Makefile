COLLEEN = Colleen

GRACE = Grace

SULLY = Sully

COL_SRC = Colleen.S

GRA_SRC = Grace.S

SUL_SRC = Sully.S

COL_OBJ = ${patsubst %.S, %.o, ${COL_SRC}}

GRA_OBJ = ${patsubst %.S, %.o, ${GRA_SRC}}

SUL_OBJ = ${patsubst %.S, %.o, ${SUL_SRC}}

ASM = nasm

NFLAGS = -f elf64 -F dwarf -g

CC = cc

CFLAGS = -m64 -no-pie -lc -g -fsanitize=address


all: 	${COLLEEN} ${GRACE} ${SULLY} Makefile

${COLLEEN}: 	${COL_OBJ}
	${CC} ${CFLAGS} $? -o $@

${GRACE}: 	${GRA_OBJ}
	${CC} ${CFLAGS} $? -o $@

${SULLY}: 	${SUL_OBJ}
	${CC} ${CFLAGS} $? -o $@

%.o:	%.S
	${ASM} ${NFLAGS} $< -o ${<:.S=.o}

clean:
	rm -f ${COL_OBJ} ${GRA_OBJ} ${SUL_OBJ} Grace_kid.S

fclean:	clean
	rm -f ${COLLEEN} ${GRACE} ${SULLY} Sully_* Grace_kid.c

re:		fclean all

