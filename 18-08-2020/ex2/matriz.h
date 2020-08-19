#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz Matriz;

Matriz* matriz_cria (int m, int n);
void matriz_libera (Matriz* mat);
float matriz_acessa (Matriz* mat,int i, int j);
void matriz_atribui (Matriz* mat, int i , int j, float v);
int matriz_linhas (Matriz* mat);
int matriz_colunas (Matriz* mat);
Matriz* matriz_transposta(Matriz* mat);

#endif
