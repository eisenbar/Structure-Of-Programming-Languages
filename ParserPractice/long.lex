%{
#include <stdio.h>
#include "long.tab.h"

%}

%%

ZERO		{return ZERO;}
[0-9]+		{return INT;}
G		{return G;}
X		{return X;}
Z		{return Z;}
Y		{return Y;}
;		{return EOL;}
END		{return END;}
[\s|\n|\t]	;
.		{printf("ERROR");}

%%
