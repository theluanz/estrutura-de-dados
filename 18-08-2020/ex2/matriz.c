#include "matriz.h"

#include <stdlib.h>
#include <stdio.h>

struct matriz {
    int lin;
    int col;
    float** v;
};

Matriz* matriz_cria (int m, int n)
{
    int i;
    Matriz *mat = (Matriz*) malloc(sizeof(m*n*sizeof(float)));
    mat->lin = m;
    mat->col = n;
    mat->v = (float**) malloc(m*sizeof(float*));
    for (i=0; i<m; i++) {
        mat->v[i] = (float*) malloc (n*sizeof(float));
    }
    return mat;
}

void matriz_libera (Matriz* mat)
{
    int i;
    for (i=0;i<mat->lin;i++) {
        free(mat->v[i]);
    }
    free(mat->v);
    free(mat);
}

float matriz_acessa (Matriz* mat,int i, int j)
{
    if (i<0 || i>=mat->lin || j<0 || j>=mat->col) {
        printf("Acesso inválido!\n"); 
        exit(1);
    }
    return mat->v[i][j];
}

void matriz_atribui (Matriz* mat, int i, int j, float v) {
    if (i<0 || i>=mat->lin || j<0 || j>=mat->col) { 
        printf("Atribuição inválida!\n");
        exit(1);    
    }
    mat->v[i][j] = v; 
}

/* deve retornar o número de linhas da matriz */
int matriz_linhas (Matriz* mat) {
    return mat->lin;    
}

/* deve retornar o número de colunas da matriz */
int matriz_colunas (Matriz* mat) {
    return mat->col;
}

Matriz* matriz_transposta(Matriz* mat){
    int colunas,linhas;
    float valor;
    colunas= matriz_colunas(mat);
    linhas = matriz_linhas(mat);

    Matriz* transposta = matriz_cria(colunas,linhas);
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
          valor = matriz_acessa(mat, i,j);
          matriz_atribui(transposta, j, i, valor);
        } 
    }
    return transposta;

}