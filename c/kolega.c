#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main (void) {
  
    int m,n,s,z,prvadesetka,prvajedinica,drugadesetka,drugajedinica;
    printf("Učitajte dva dvoznamenkasta prirodna broja");
    scanf ("%d %d",&m,&n);
    prvajedinica = m%10;
    prvadesetka = (m/10)%10;
    drugajedinica = n%10;
    drugadesetka = (n/10)%10;
    s = (prvadesetka+prvajedinica);
    z = (drugadesetka+ drugajedinica);

     if (s>z) {    
      printf ("Broj %d ima vecu sumu znamenaka od broja %d", m,n);   
     } else { if (z>s) printf ("Broj %d ima vecu sumu znamenaka od broja %d",n,m);
     }
      return 0;

    }      
     
   