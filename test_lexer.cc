#include <iostream>
using namespace std;
#include "tokens.hh"

int yylex();
extern FILE* yyin;


int main() {
	FILE *myfile = fopen("test1.tig","r");
	if (!myfile) {
		cout << "can't find that!" << endl;
		return -1;
	}
	yyin = myfile;
	while (int tok = yylex()) {
		switch(tok) {
			case ADD: ; break; //just copied down the syntax for all tokens?
			case SUB: ; break;
			case MUL: ; break;
			case DIV: ; break;
			case AND: ; break;
			case OR: ; break;
			case EQUAL: ; break;
			case INEQUAL: ; break;
			case GREATER: ; break;
			case LESS: ; break;
			case GREQUAL: ; break;
			case LEQUAL: ; break;
			case SETTO: ; break;
			case SEPARATE: ; break;
			case DECLARE: ; break;
			case SEMI: ; break;
			case LBRAC: ; break;
			case RBRAC: ; break;
			case LSQUARE: ; break;
			case RSQUARE: ; break;
			case LCURLY: ; break;
			case RCURLY: ; break;
			case DOT: ; break;
			case CARRETURN: ; break;
			case NEWLINE: ; break;
			case COMMENTSTART: ; break;
			case COMMENTEND: ; break;
			case DOUBQUOTE: ; break;
			case BACKSLASH: ; break;
			case XNUM: ; break;
			case NUM: ; break;
			case ALERT: ; break;
			case BACKSPACE: ; break;
			case FORMFEED: ; break;
			case TAB: ; break;
			case VIRTTAB: ; break;
			case ARRAY: ; break;
			case IF: ; break;
			case THEN: ; break;
			case ELSE: ; break;
			case WHILE: ; break;
			case FOR: ; break;
			case TO: ; break;
			case DO: ; break;
			case LET: ; break;
			case IN: ; break;
			case END: ; break;
			case OF: ; break;
			case BREAK: ; break;
			case NIL: ; break;
			case FUNCTION: ; break;
			case VAR: ; break;
			case TYPE: ; break;
			case IMPORT: ; break;
			case PRIMITIVE: ; break;
			case CLASS: ; break;
			case EXTENDS: ; break;
			case METHOD: ; break;
			case NEW: ; break;
		}
	}
}