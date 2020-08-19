#include <stdio.h>
#include "matriz.h"

int main (void)
{
    Matriz* m = matriz_cria(2,3);    


    matriz_atribui(m,0,0,1.0);
    matriz_atribui(m,0,1,2.0);
    matriz_atribui(m,0,2,3.0);
    matriz_atribui(m,1,0,4.0);
    matriz_atribui(m,1,1,5.0);
    matriz_atribui(m,1,2,6.0);
    float num = matriz_acessa(m,0,1);
    //printf("%f", num);
    
    Matriz* n = matriz_transposta(m);
    for (int i = 0; i < matriz_linhas(n); i++){
        for (int j = 0; j < matriz_colunas(n); j++)
        {
            float num= matriz_acessa(n,i,j);
            printf("%f \n",num);
        }
        
    }
    
    
    




    matriz_libera(m);
    return 0;
}