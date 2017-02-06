CC = g++
libmylib.a: lib.o
	ar rcs $@ $^
lib.o: lib.cc lib.h
	$(CC) -c -o $@ $<
clean:
	rm -f *.o *.a
