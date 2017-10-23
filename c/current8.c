#include <stdio.h>
/* t - 3 min*/

int main(void){
    int x;
    scanf("%d",&x);
    printf("%d%d%d",x%10,x/10%10,x/100);
    return 0;
}