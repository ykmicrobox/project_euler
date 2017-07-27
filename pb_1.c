//
// The sum of all the multiples of 3 or 5 below 1000 is : 233168
//
#include <stdio.h>

#define N 3
#define M 5
#define ROOF 1000

int main (int argc, char **argv) {
   int i, sum = 0;

   for (i = 0; i < ROOF; i++) {
      sum += !(i % N && i % M) * i;
   }
   printf("The sum of all the multiples of %d or %d below %d is : %d\n", N, M, ROOF, sum);

   return 0;
}
