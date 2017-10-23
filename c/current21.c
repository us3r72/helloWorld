#include <stdio.h>

int main(void){
    float x;
    scanf("%f", &x);
    printf("\nx = %0.2f", x);
    (x<0)?(x=-x):((x>0)?(x=x*2/3+3):(x=x));
    printf(" y = %.2f", x);
    return 0;
}