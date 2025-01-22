NAME=RNBOCommandLine

all: exec

build: 
	mkdir build && cd build && cmake .. && cmake --build .
	cp build/RNBOCommandLine ./$(NAME)

exec: build
	./build/$(NAME)

clean:
	rm -rf build

fclean: clean
	rm -rf $(NAME)
