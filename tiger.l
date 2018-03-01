%{
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
#include tokens.hh //PART 1
%}

%% //PART 3:

"+" 		{return ADD;}
"-" 		{return SUB;}
"*" 		{return MUL;}
"/" 		{return DIV;}
"&" 		{return AND;}
"|" 		{return OR;}
"=" 		{return EQUAL;}
"<>" 		{return INEQUAL;}
">" 		{return GREATER;}
"<" 		{return LESS;}
">=" 		{return GREQUAL;}
"<=" 		{return LEQUAL;}
":="		{return SETTO;}
","			{return SEPARATE;}
":"			{return DECLARE;}
";"			{return SEMI;}
"("			{return LBRAC;}
")"			{return RBRAC;}
"["			{return LSQUARE;}
"]"			{return RSQUARE;}
"{"			{return LCURLY;}
"}"			{return RCURLY;}
"."			{return DOT;}
"\r"		{return CARRETURN;}
"\n"		{return NEWLINE;}
"/*"		{return COMMENTSTART;}
"*/"		{return COMMENTEND;}
"\""		{return DOUBQUOTE;}
"\\"		{return BACKSLASH;}
"\xnum"		{return XNUM;}
"\num"		{return NUM;}
"\a"		{return ALERT;}
"\b"		{return BACKSPACE;}
"\f"		{return FORMFEED;}
"\t"		{return TAB;}
"\v"		{return VIRTTAB;}
"array" 	{return ARRAY;}
"if" 		{return IF;}
"then" 		{return THEN;}
"else" 		{return ELSE;}
"while" 	{return WHILE;}
"for" 		{return FOR;}
"to" 		{return TO;}
"do" 		{return DO;}
"let" 		{return LET;}
"in" 		{return IN;}
"end" 		{return END;}
"of" 		{return OF;}
"break" 	{return BREAK;}
"nil" 		{return NIL;}
"function"	{return FUNCTION;}
"var" 		{return VAR;}
"type" 		{return TYPE;}
"import" 	{return IMPORT;}
"primitive"	{return PRIMITIVE;}
"class" 	{return CLASS;}
"extends" 	{return EXTENDS;}
"method" 	{return METHOD;}
"new"		{return NEW;}



%%
//PART 2: test cases
int main() 
{
	return 0;
}

