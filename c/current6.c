#include <stdio.h>
/* t - 11 min
scanf 2 variables
more ?:
*/

int main(void){
    int x,y;
    scanf("%d\n%d",&x,&y);
    ((x/10%10+x%10)>(y/10%10+y%10))?(printf("Broj %d ima vecu sumu znamenaka od broja %d, x, y")):((((x/10%10+x%10)==(y/10%10+y%10)))?(printf("Brojevi %d i %d imaju istu sumu znamenaka", y, x)):(printf("Broj %d ima vecu sumu znamenaka od broja %d", y, x)));
    return 0;
}