#include <Stdio.h>
#include <stdlib.h>

void imprimirVetor(int* vet,int tamanhoVetor){

    for(int i = 0;i < tamanhoVetor; i++){

        printf(" %i ",*(vet + i));
    }
}

void main(){

    int vet[5] = {1,2,3,4,5};

    imprimirVetor(vet,5);


}
