#include "ponto.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

Ponto* ponto_cria (float x, float y)
{
    Ponto* p = (Ponto*) malloc (sizeof(Ponto));
    if (p == NULL) {
        printf ("Memória insuficiente\n");
        exit(1);
    }
    p->x = x;
    p->y = y;
    return p;
}

void ponto_libera (Ponto* p)
{
    free(p);
}

void ponto_acessa (Ponto* p, float* x, float* y)
{
    *x = p->x;
    *y = p->y;
}

void ponto_atribui (Ponto* p, float x, float y)
{
    p->x = x;
    p->y = y;
}

float ponto_distancia (Ponto* p1, Ponto* p2)
{
    float dx = p2->x - p1->x;
    float dy = p2->y - p1->y;
    return sqrt(dx*dx + dy*dy);
}

//1
void cordenadasPolar (Ponto* p, float x, float y){
    float raio, theta;
    p->x = x;
    p->y = y;
    raio = sqrt(pow(x,2) + pow(y,2));
    theta = atan(y/x);
    theta = (180*theta)/3.14;    
    printf("Raio: %f Theta: %f",raio, theta);
}


