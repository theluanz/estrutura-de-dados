#include <stdio.h>
#include "complex.h"

int main (void)
{
    Complex* c = complexCria(3,3);    
    Complex* d = complexCria(1,5);    

    Complex* resultadoSoma = complexSoma(c,d);
    Complex* resultadoSubtracao = complexSubtrair(c,d); 
    
    complexLibera(c);
    complexLibera(d);
    complexLibera(resultadoSoma);
    complexLibera(resultadoSubtracao);
    return 0;
}