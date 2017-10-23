#include <stdio.h>

int main(void){
    int x,y;
    scanf("%d\n%d",&x,&y);
    printf("Brojevi kreirani od znamenaka:");
    if (x*y%2!=0){
        printf("-");
    }
    else {
            if (x%2==0) printf("%d ",x+y*10);
            if (y%2==0) printf("%d ",y+x*10);
    }
    return 0;
}