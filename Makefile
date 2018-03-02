CXX=clang++-5.0  
CXXFLAGS=-g -std=c++17 -Wall -pedantic -Wextra -Werror
LDFLAGS=$(CXXFLAGS)
LIBS=

INC=tokens.hh
SRC=test_lexer.cc 
OBJ=test_lexer.o lex.yy.o

all: test_lexer

test_lexer: $(OBJ)
	$(CXX) $(LDFLAGS) $(LIBS) -o $@ $(OBJ)

test: test_lexer
	./test_lexer

lex.yy.o: lex.yy.c
	$(CXX) $(CXXFLAGS) $<

lex.yy.c: tiger.l
	flex $<

%.o.cc: %.cc %.hh
	$(CXX) $(CXXFLAGS) -c -o $@ $<


clean:
	rm *.o lex.yy.c test_lexer