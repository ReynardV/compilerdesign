#define CATCH_CONFIG_MAIN	

#include "catch.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "ast.hh"

int yyparse();
extern FILE* yyin;

using input = yyparse() //I'm actually kinda hazy on exactly what the input is supposed to be called, so I'm doing this so it can be easily modified later.

TEST_CASE("declarations"){
	yyin = fopen("test1.tig","r");
	auto decs = input->decs_;
	REQUIRE(decs->dec_->print() == "type arrtype = array of int")
	REQUIRE(decs->seq_->dec_->print() == "var arr1:arrtype := arrtype [10] of 0")
	fclose(yyin);
	delete decs;

	yyin = fopen("test2.tig","r");
	auto decs = input->decs_;
	REQUIRE(decs->dec_->print() == "type myint = int")
	REQUIRE(decs->seq_->dec_->print() == "type arrtype = array of myint")
	fclose(yyin);
	delete decs;

	yyin = fopen("test3.tig","r");
	auto decs = input->decs_;
	REQUIRE(decs->dec_->print() == "type rectype = {name:string, age:int}")
	REQUIRE(decs->seq_->dec_->print() == "var rec1:rectype := rectype {name=\"Nobody\", age=1000}")
	fclose(yyin);
	delete decs;
}

TEST_CASE("expressions not empty"){
	yyin = fopen("test1.tig","r");
	auto decs = input;
	REQUIRE(decs->exps_ != NULL)
	fclose(yyin);
	delete decs;

	yyin = fopen("test2.tig","r");
	auto decs = input;
	REQUIRE(decs->exps_ != NULL)
	fclose(yyin);
	delete decs;

	yyin = fopen("test3.tig","r");
	auto decs = input;
	REQUIRE(decs->exps_ != NULL)
	fclose(yyin);
	delete decs;
}














