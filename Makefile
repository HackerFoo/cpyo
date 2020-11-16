.PHONY: run
run: wrapper.py kernel.so
	./wrapper.py

kernel.so: kernel.cpp
	$(CXX) -Wall -g -fPIC -shared -o $@ $? -lc

clean:
	rm -f kernel.so
