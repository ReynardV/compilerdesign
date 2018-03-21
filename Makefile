
CXX=clang++-5.0   # Can switch to g++ if desired
# # CXX=g++-6
CXXFLAGS=-g -Og -std=c++17 -Wall -pedantic -Wextra -Wno-unused-parameter
#CXXFLAGS=-g -Og -std=c++17 -Wall -pedantic -Wextra -Werror
#CXXFLAGS=-O3 -std=c++17 -Wall -pedantic -Wextra -Werror
LDFLAGS=$(CXXFLAGS) -lfl
LIBS=


all: test_lexer test_parser tiger

lex: test_lexer
	./test_lexer

parse: test_parser
	./test_parser

tiger: tiger.o tiger.tab.o tiger.tab.h lex.yy.o ast.hh
	$(CXX) $(LDFLAGS) $(LIBS) -o $@ $^

test_lexer: tiger.tab.o lex.yy.o test_lexer.o tiger.o ast.hh
	$(CXX) $(LIBS) -o $@ $^ $(LDFLAGS)

test_parser: tiger.tab.o lex.yy.o test_parser.o tiger.o ast.hh
	$(CXX) $(LIBS) -o $@ $^ $(LDFLAGS)

tiger.tab.c tiger.tab.h: M_tiger.y
	bison -d M_tiger.y

lex.yy.c: M_tiger.l tokens.hh
	flex M_tiger.l

%.o.cc: %.cc %.hh
	$(CXX) $(CXXFLAGS) -c -o $@ $<

lex.yy.o: lex.yy.c
	$(CXX) $(CXXFLAGS) -c -o lex.yy.o lex.yy.c

tiger.tab.o: tiger.tab.c
	$(CXX) $(CXXFLAGS) -c -o tiger.tab.o tiger.tab.c

%.o.c: %.cc %.hh
	$(CXX) $(CXXFLAGS) -c -o $@ $<

test: all
	./test_lexer
	./test_parser

clean:
	rm -f *.o tiger test_lexer test_parser lex.yy.c tiger.tab.c tiger.tab.h
