CXX = g++
CFLAGS = -fPIC
LDFLAGS = -shared

foo.so: foo.cc foo.h
	$(CXX) $(CFLAGS) $(LDFLAGS) $< -o $@

clean:
	rm -f *.so
