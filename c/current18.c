#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a,b,c;
    scanf("%d\n%d\n%d",&a, &b, &c);
    if(a+b==c){
        printf("%d + %d = %d",a, b, c);
    } else if (a+c == b) {
        printf("%d + %d = %d",a, c, b);        
    } else if (b+c == a){
        printf("%d + %d = %d",b, c, a);        
    } else {
        printf("Niti jedan broj nije jednak zbroju preostalih brojeva.");
    }
    return 0;
}