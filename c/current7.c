#include <stdio.h>

int main(void){
    int x;
    scanf("%d",&x);
    if (x%3==0){
        if (x%2==0){
            printf("Broj %d je djeljiv s 6", x);
        } else {
            printf("Broj %d nije djeljiv s 6 jer nije djeljiv s 2", x);            
        }
    } else if (x%2==0){
            printf("Broj %d nije djeljiv s 6 jer nije djeljiv s 3", x);                        
        } else {
            printf("Broj %d nije djeljiv s 6 jer nije djeljiv ni s 2 ni s 3", x);            
            
        }
    return 0;
}