#include <stdio.h>
#include <stdlib.h>

int* retornarVetor(int nuMax){

    int *vet;
    vet = ((int*) malloc(nuMax * sizeof(int)));

    for(int i = 0; i <  nuMax; i++){

        (*(vet + i)) = (rand() % nuMax);
    }
    return  vet;
}

void main(){

   int *p;
   int nu = 8;
   p = retornarVetor(nu);

   for(int i = 0; i < nu;i++ ){

    printf("%i ",*p + i);
   }

}
