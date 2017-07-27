//
// Largest prime factor of 600851475143 : 6857
//
#include <stdio.h>

#define P 600851475143

int main (int argc, char** argv) {
   long int i, prod = 1;

   for (i = 3; i < P / 2 ; i++) {
      if (!(P % i)) {
         prod *= i;
         if (P == prod) {
            printf ("Largest prime factor of %ld : %ld\n", P, i);
            break;
         }
      }
   }

   return 0;
}
