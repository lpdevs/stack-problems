CC = g++
LDFLAGS = -L..
LIBS = -lmylib
TARGET = prog

$(TARGET): main.o
	$(CC) $^ $(LDFLAGS) $(LIBS) -o $@
main.o: main.cc
	$(CC) -c $^ -o $@
clean:
	rm -f *.o $(TARGET)
  
