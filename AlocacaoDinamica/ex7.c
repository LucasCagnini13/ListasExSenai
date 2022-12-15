#include <stdio.h>
#include <stdlib.h>

void main(){

    int linhas;
    int* L1;
    int** L2;
    int col;
    int* C1;
    int** C2;
    int* matriz;

    printf("linhas : ");
    scanf("%i", &linhas);
     printf("clunas : ");
    scanf("%i", &col);

    L1 = &linhas;
    L2 = &L1;
    C1 = &col;
    C2 = &C1;

    matriz = ((int*) malloc(((**L2) * (**C2)) * sizeof(int)));

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < col; j++){

            printf("[%i][%i] : ",i,j);
            scanf("%i",&matriz[i * col + j]);
            system("cls");
        }
    }

     for(int i = 0; i < linhas; i++){
        for(int j = 0; j < col; j++){

            printf("%i ",matriz[i * col + j]);

        }
        printf("\n");
    }

}
