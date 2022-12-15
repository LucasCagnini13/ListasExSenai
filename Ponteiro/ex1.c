#include <Stdio.h>
#include <stdlib.h>

void main(){

    float vet[10] = {1,2.6,89,76,4,5.6,9,7,9.7,4};

    for(int i = 0;i < 10; i++){

        printf("%p\n",&vet[i]);
    }
}
