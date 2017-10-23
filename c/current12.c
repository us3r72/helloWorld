#include <stdio.h>

int main(void){
    int x,y,z;
    scanf("%d %d\n%d",&x,&y,&z);
    if (z==1) printf("%d + %d = %d",x,y,x+y);
    if (z==2){
        if (y>x){
            z = x;
            x = y;
            y = z;
        }
        printf("%d - %d = %d",x,y,x-y);
    }
    return 0;
}