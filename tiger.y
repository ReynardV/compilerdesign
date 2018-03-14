%{
#  include <stdio.h>
#  include <stdlib.h>
#  include "fb3-1.h"
%}

struct EXPN {
	
}

/* parens, exponent, product, sum*/

%%
assignment: var '=' expr {$$ = $3;}
| var '=' boolex {$$ = $3;}

expr: '(' sum ')' {$$ = $2;}
| sum {$$ = $1;}

sum: expr '+' sum { $$ = newast('+', $1,$3); }
| product {$$ = $1;}

product: expr '*' product {$$ = newast('*', $1,$3);}
| expon {$$ = $1;}

expon: expr '^' expr {}
| expr {$$ = $1;}

boolex: expr "==" expr {}
| expr "<=" expr {}
| expr ">=" expr {}
| expr "<>" expr {}
| expr "<" expr {}
| expr ">" expr {}


statement: "if" boolex "then" expr "else" expr {}
| "if" boolex "then" expr {}
| "while" boolex "do" expr {}


comment: "/*" comment "*/" {pass;}


