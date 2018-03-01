CXX=clang++-5.0  
CXXFLAGS=-g -std=c++17 -Wall -pedantic -Wextra -Werror
LDFLAGS=$(CXXFLAGS)
LIBS=

INC=tokens.hh
SRC=test_lexer.l, tiger.l
OBJ=$(SRC:.cc=.o)

all: test_lexer

test_lexer: $(OBJ)
	$(CXX) $(LDFLAGS) $(LIBS) -o $@ $(OBJ)

test: $(OBJ)
	$(CXX) $(LDFLAGS) $(LIBS) -o $@ $(OBJ)

clean:
	rm -f $(OBJ)
	