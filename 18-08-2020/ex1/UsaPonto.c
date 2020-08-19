#include <stdio.h>
#include "ponto.h"

int main (void)
{
    Ponto* p = ponto_cria(2.0,1.0);
    Ponto* q = ponto_cria(3.4,2.1);

    float distancia = ponto_distancia(p,q);

  //  printf ("Distância entre os pontos: %f\n",distancia);
    cordenadasPolar(p, 2,3);
    
    ponto_libera(q);
    ponto_libera(p);

    return 0;
}