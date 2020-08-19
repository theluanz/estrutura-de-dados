typedef struct ponto Ponto;

Ponto* ponto_cria (float x, float y);
void ponto_libera (Ponto* p);
void ponto_acessa (Ponto* p , float* x, float* y);
void ponto_atribui (Ponto* p, float x, float y);
float ponto_distancia (Ponto* p1, Ponto* p2);
void cordenadasPolar (Ponto* p, float x, float y);