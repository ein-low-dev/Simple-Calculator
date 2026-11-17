.PHONY: build run clean

build: ./src/main.c
	cc ./src/main.c -ansi -o ./build/result

run: ./build/result
	./build/result

clean:
	rm -f ./build/result
