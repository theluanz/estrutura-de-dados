#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complex Complex;

Complex* complexCria (int m, int n);
void complexLibera (Complex* c);
Complex* complexSoma(Complex* c, Complex* d);
Complex* complexSubtrair(Complex* c, Complex* d);

#endif
