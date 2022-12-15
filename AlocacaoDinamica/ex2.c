#include <Stdio.h>
#include <stdlib.h>

void main(){

    int n;
    int *vet;

    do{
        system("cls");
        printf("digite o tamanho do vetor : ");
        scanf("%i",&n);
    }while(n < 0);

    vet = ((int*) malloc(n * sizeof(int)));

    for(int i = 0;i < n;i++ ){

        do{   printf("escreva o valor do elemento %i : ",i);
            scanf("%i",vet+i);
    }while(*(vet + i)  < 2 );

    }

    for(int i = 0; i < n;i++){

        printf("%i ",*(vet+i));
    }
}
