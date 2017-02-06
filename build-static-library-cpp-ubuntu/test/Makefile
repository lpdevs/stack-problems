TARGET = prog
CC = g++
LDFLAGS = -L..
LIBS = -static -lmylib

$(TARGET): main.o
	$(CC) $^ $(LDFLAGS) $(LIBS) -o $@
main.o: main.cc
	$(CC) -c $^ -o $@
clean:
	rm -f *.o $(TARGET)
