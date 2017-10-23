#include <stdio.h>
/* t - 8 min*/

int main(void){
    int x;
    scanf("%d",&x);
    printf("Broj %d %sje djeljiv s 3 i zadnja znamenka mu %sje 8", x, (x%3==0)?"":"ni", (x%10==8)?"":"ni");
    return 0;
}