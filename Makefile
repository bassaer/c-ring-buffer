TARGET = app
CFLAGS = -c -Wall -I./
OBJ    = main.o queue.o

.PHONY: run clean

all: run

%.o: %.c
	gcc $(CFLAGS) -o $@ $*.c

${TARGET}: ${OBJ}
	gcc -o ${TARGET} $^

run: ${TARGET}
	@./$^

clean:
	rm -rf ${OBJ} ${TARGET}

