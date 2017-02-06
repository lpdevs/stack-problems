CC = g++
CFLAGS = -fPIC
LDFLAGS = -shared

libmylib.so: lib.o
	$(CC) $(LDFLAGS) -o $@ $^
lib.o: lib.cc lib.h
	$(CC) -c -fPIC $< -o $@
clean:
	rm -f *.o *.so
