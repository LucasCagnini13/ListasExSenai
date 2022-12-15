#include <stdio.h>
#include <stdlib.h>

int* retornarMatirz(int linhas,int colunas){

    int* matriz;
    matriz = ((int*) malloc((linhas  * colunas) * sizeof(int)));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

             if( i == j){
             matriz[i * colunas  + j] = 1;
             }else{

             matriz[i * colunas + j] = 0;
             }
        }
    }
    return matriz;
}

void main(){

    int *p;
    p = retornarMatirz(5,5);

       for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

         printf("%i ", p[i * 5 + j]);

        }
        printf("\n ");
    }
}
