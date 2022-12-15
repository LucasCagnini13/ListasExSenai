#include <Stdio.h>
#include <stdlib.h>

void main(){

    int vet[5];


    for(int i = 0;i < 5; i++){
        printf("digite o valor do elemento [%i] : ",i+1);
        scanf("%i",vet +i);

    }

    for(int i = 0;i < 5; i++){
        printf(" [%i] ",(*vet+i)*2);


    }


}
