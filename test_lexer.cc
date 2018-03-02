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
			case ADD: cout<< "ADD "; break; //just copied down the syntax for all tokens?
			case SUB: cout<< "SUB "; break;
			case MUL: cout<< "MUL "; break;
			case DIV: cout<< "DIV "; break;
			case AND: cout<< "AND "; break;
			case OR: cout<< "OR "; break;
			case EQUAL: cout<< "EQUAL "; break;
			case INEQUAL: cout<< "INEQUAL "; break;
			case GREATER: cout<< "GREATER "; break;
			case LESS: cout<< "LESS "; break;
			case GREQUAL: cout<< "GREQUAL "; break;
			case LEQUAL: cout<< "LEQUAL "; break;
			case SETTO: cout<< "SETTO "; break;
			case SEPARATE: cout<< "SEPARATE "; break;
			case DECLARE: cout<< "DECLARE "; break;
			case SEMI: cout<< "SEMI "; break;
			case LBRAC: cout<< "LBRAC "; break;
			case RBRAC: cout<< "RBRAC "; break;
			case LSQUARE: cout<< "LSQUARE "; break;
			case RSQUARE: cout<< "RSQUARE "; break;
			case LCURLY: cout<< "LCURLY "; break;
			case RCURLY: cout<< "RCURLY "; break;
			case DOT: cout<< "DOT "; break;
			case CARRETURN: cout<< "CARRETURN "; break;
			case NEWLINE: cout<< "NEWLINE "; break;
			case COMMENTSTART: cout<< "COMMENTSTART "; break;
			case COMMENTEND: cout<< "COMMENTEND "; break;
			case DOUBQUOTE: cout<< "DOUBQUOTE "; break;
			case BACKSLASH: cout<< "BACKSLASH "; break;
			case XNUM: cout<< "XNUM "; break;
			case NUM: cout<< "NUM "; break; //in current code this should never be returned
			case ALERT: cout<< "ALERT "; break;
			case BACKSPACE: cout<< "BACKSPACE "; break;
			case FORMFEED: cout<< "FORMFEED "; break;
			case TAB: cout<< "TAB "; break;
			case VIRTTAB: cout<< "VIRTTAB "; break;
			case ARRAY: cout<< "ARRAY "; break;
			case IF: cout<< "IF "; break;
			case THEN: cout<< "THEN "; break;
			case ELSE: cout<< "ELSE "; break;
			case WHILE: cout<< "WHILE "; break;
			case FOR: cout<< "FOR "; break;
			case TO: cout<< "TO "; break;
			case DO: cout<< "DO "; break;
			case LET: cout<< "LET "; break;
			case IN: cout<< "IN "; break;
			case END: cout<< "END "; break;
			case OF: cout<< "OF "; break;
			case BREAK: cout<< "BREAK "; break;
			case NIL: cout<< "NIL "; break;
			case FUNCTION: cout<< "FUNCTION "; break;
			case VAR: cout<< "VAR "; break;
			case TYPE: cout<< "TYPE "; break;
			case IMPORT: cout<< "IMPORT "; break;
			case PRIMITIVE: cout<< "PRIMITIVE "; break;
			case CLASS: cout<< "CLASS "; break;
			case EXTENDS: cout<< "EXTENDS "; break;
			case METHOD: cout<< "METHOD "; break;
			case NEW: cout<< "NEW "; break;
			case VARIABLE: cout<<"VARIABLE "; break;
		}
	}
}