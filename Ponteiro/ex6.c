#include <Stdio.h>
#include <stdlib.h>

void main(){

    int a,*b,**c,***d;

    a = 1;
    b = &a;
    c = &b;
    d = &c;

    printf("a = %i \nb = %i \nc = %i\nd = %i ",a,*b * 2,**c * 3,***d * 4);

}
