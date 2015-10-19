CC=g++
SRC=src
CFLAGS=-Wall -Werror -pedantic -c -std=c++11 
SOURCES=$(wildcard $(SRC)/*.cpp)
OBJS=$(notdir $(SOURCES:.cpp=.o))

%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) $< -o $@

enigma: $(OBJS)
	$(CC) $(OBJS) -o $@

.PHONY:	clean
clean:
	rm -rf enigma *.o 