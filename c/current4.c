#include <stdio.h>
/* t - 5 min 
    (?:)^2
*/

int main(void){

    int x;
    scanf("%d", &x);
    (x>0)?((x%2==0)?printf("Broj %d je paran", x):printf("Broj %d nije paran",x)):(printf("Neispravan broj unesen"));
    return 0;
}