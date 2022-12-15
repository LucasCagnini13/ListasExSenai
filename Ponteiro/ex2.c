#include <Stdio.h>
#include <stdlib.h>

void main(){

    float matriz[3][3] = {(3,4.5,6.7),(6,7,8),(1,2,3)};

    for(int i = 0;i < 3; i++){
        for(int j= 0;j < 3;j++){

        printf("%p\n",&matriz[i][j]);
        }
    }
}
