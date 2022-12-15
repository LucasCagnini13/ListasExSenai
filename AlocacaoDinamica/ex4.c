#include <stdio.h>
#include <stdlib.h>

int* retornarPonteiro(int n){

    if(n <= 0){

        return NULL;
    }
    int* vet;
    vet = ((int*) malloc(n *sizeof(int)));

    return vet;
}

void main(){

    int *p;
    p = retornarPonteiro(5);

     for(int i = 0; i < 5;i++ ){

    (*(p + i)) = (rand() % 100);
    printf("%i ",*p + i);
   }

}
