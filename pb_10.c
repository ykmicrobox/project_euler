//
// The sum of all the primes below 2000000 is 142913828922
//

#include <stdio.h>
#include <math.h>

#define false 0
#define true 1

#define N 2000000

int isPrime (int x) {
   int i;

   if ((x > 2) && !(x % 2)) {
      return false;
   }
   for (i = 3; i <= sqrt(x) + 1; i += 2) {
      if (!(x % i)) {
         return false;
      }
   }
   return true;
}

int main (int argc, char** argv) {
   int i;
   long int sum;

   for (i = 2, sum = 0.l; i < N; i++) {
      sum += isPrime (i) ? (long int)i : 0.l;
   }
   printf ("The sum of all the primes below %d is %ld\n", N, sum);

   return 0;
}
