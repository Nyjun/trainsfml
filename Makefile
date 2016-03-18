CXX?=g++
CXXFLAGS=-Wall -Werror -Wextra -pedantic -std=c++14
LDLIBS=-lsfml-graphics -lsfml-system -lsfml-window



OBJS=$(SRC:.cc=.o)


all:
	make -C src/ build

test:
	make -C tests/ tests

clean:
	make -C src/ clean
	make -C tests/ clean


.PHONY: clean
