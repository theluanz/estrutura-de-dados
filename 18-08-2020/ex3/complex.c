#include "complex.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct complex {
    int a;
    int b;
};

Complex* complexCria (int m, int n){
    Complex *numeros = (Complex*) malloc(sizeof(Complex));
    numeros->a = m;
    numeros->b = n;  
    return numeros;
}

void complexLibera (Complex* c){
    free(c);
}

Complex* complexSoma(Complex* c, Complex* d){
    Complex* r = complexCria((c->a+d->a),(c->b+d->b));    
    printf("%d + %di\n",r->a,r->b);
    return r;
}

Complex* complexSubtrair(Complex* c, Complex* d){
    Complex* r = complexCria((c->a-d->a),(c->b-d->b));    
    printf("%d + %di\n",r->a,r->b);
    return r;
}


