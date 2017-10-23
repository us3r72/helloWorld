#include <stdio.h>
#include <stdlib.h>

int power(int x, int y){
    int i,c = 1;
    for(i = 1; i<=y; i++){
        c=c*x;
    }
    return c;
}

int main(){
    int x;
    scanf("%d",&x);
    printf("Broj %d %sje Armstrongov broj", x, (x==power(x%10,3)+power(x/10%10,3)+power(x/100,3))?"":"ni");
    return 0;
}

