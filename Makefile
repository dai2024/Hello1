CC=gcc
CFLAGS=-O0 -Wall
OBJS=Hello1.o

TARGET=Hello1

# speces -> Tabs 8
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)
clean:
	rm -f *.o Hello1
