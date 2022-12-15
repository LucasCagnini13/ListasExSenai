#include <Stdio.h>
#include <stdlib.h>

void main(){

   int *vet;
   int tamanho;

   printf("digite o tamanho do vetor : ");
   scanf("%i",&tamanho);
   vet = ((int*) malloc(tamanho *sizeof(int)));

   for(int i = 0; i < tamanho; i++){

    printf("digite o valor do elemento [%i] : ",i+1);
    scanf("%i",vet+i);
    printf("\n");

   }

   system("cls");

   for(int i = 0; i < tamanho; i++){

    printf(" %i ",*(vet + i));

   }

}
