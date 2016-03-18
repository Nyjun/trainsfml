CXX?=g++
CXXFLAGS=-Wall -Werror -Wextra -pedantic -std=c++14
LDLIBS=-lsfml-graphics -lsfml-system -lsfml-window
SRC=main.cc game.cc map.cc tile.cc res.cc entity.cc
OBJS=$(SRC:.cc=.o)


build: $(OBJS)
	$(CXX) -g $(CXXFLAGS) $(LDLIBS) $^ -o $@

clean:
	$(RM) $(OBJS) build

.PHONY: clean
