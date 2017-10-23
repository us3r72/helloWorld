#include <stdio.h>
#include <stdlib.h>
/*
t - 18 min
abs()
scnaf
?:
*/
int main(void){
    int x,y;
    scanf("%d",&x);
    printf("%d\n",x);
    y = (abs(x)/10==5) ? x%10 : x/10;
    printf("%d", y);
    return 0;
}