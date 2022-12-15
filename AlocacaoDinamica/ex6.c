#include <stdio.h>
#include <stdlib.h>

int* retornarVetor(int* a,int* b){

    int *c;
    c = ((int*) malloc(3 * sizeof(int)));

    for(int i  = 0;i < 3;i++){

            c[i] = a[i] + b[i];
    }

  return c;
}

void main(){

    int a[3] = {1,2,3};
    int b[3] = {3,2,1};

    int* c;
    c = retornarVetor(a,b);

    for(int i = 0;i < 3;i++ ){

        printf("%i ",c[i]);
    }
}
