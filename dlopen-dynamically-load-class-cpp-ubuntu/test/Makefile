TARGET = dlopen
LIBS = -ldl

dlopen: dlopen.cc
	$(CXX) $< $(LIBS) -o $@

clean:
	rm -f $(TARGET)
