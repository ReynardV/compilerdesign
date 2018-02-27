%{
#include <iostream>
using namespace std;
#define YY_DECL extern "C" int yylex()
#include tokens.hh //PART 1
%}

%% //PART 3:
"array" {return Array; }



%%
//PART 2: test cases
int main() 
{
	FILE *myfile = fopen(test1.tig,"r");
	if (!myfile) {
		cout << "not there sorry" << endl;
		return -1;
	}
	yyin = myfile;
	yylex;
	return 0;
}

