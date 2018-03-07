%{
#  include <stdio.h>
#  include <stdlib.h>
#  include "fb3-1.h"
%}

struct EXPN {
	
}

/* parens, exponent, product, sum*/

%%
assignment: var '=' expr

expr: '(' sum ')' 
| sum

sum: expr '+' sum { $$ = newast('+', $1,$3); }
| product

product: expr '*' product {$$ = newast('*', $1,$3);}
| expon

expon: expr '^' expr {$$ = EXPN}
| expr

boolex: expr "==" expr {}
| expr "<" expr {}
| expr ">" expr {}
| expr "<=" expr {}
| expr ">=" expr {}
| expr "<>" expr {}


statement: "if" boolex "then" expr 
|"if" boolex "then" expr "else" expr
|"while" boolex "do"



