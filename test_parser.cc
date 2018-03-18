#define CATCH_CONFIG_MAIN	

#include "catch.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "tokens.hh"

int yylex();
extern FILE* yyin;



TEST_CASE("files are read"){
	yyin = fopen("test1.tig","r");
	REQUIRE(yyin != NULL);
	fclose(yyin);
	}

