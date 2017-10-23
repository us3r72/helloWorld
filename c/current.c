#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void){

    int x,y;
    printf("Učitajte dva dvoznamenkasta prirodna broja:\n");
    scanf("%d %d",&x,&y);
    if ((x%10+x/10) > (y%10+y/10)){
        printf("Broj %d ima vecu sumu znamenaka od broja %d", x,y);
    }
    else if ( (x%10+x/10) < (y%10+y/10) ){
        printf("Broj %d ima vecu sumu znamenaka od broja %d",y,x);
    } else printf("Ista suma");

    return 0;
}
/*
1
2
3
4
5
6
7
8
9
10
12
18
21
27
*/