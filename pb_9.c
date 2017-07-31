//
// The prod of the pythagorean triplet for which the sum = 1000 is : 200 x 375 x 425 = 31875000
//
#include <stdio.h>
#include <math.h>

#define false 0
#define true 1

#define S 1000

static inline int square (int x) {
   return x * x;
}

int main (int argc, char **argv) {
   int a, b, c, sum, prod;
   float c_f;
   int isPythTrip;

   a = 0;
   sum = 0;
   isPythTrip = false;
   while (a < S && (S != sum || !isPythTrip)) {
      a++;
      b = a;
      sum = a + b + 1;
      while (sum < S) {
         b++;
         c_f = sqrt (square (a) + square (b));
         c = c_f;
         isPythTrip = (c == c_f) ? true : false;
         sum = a + b + c;
      }
   }
   if (S == sum) {
      prod = a * b * c;
      printf ("The prod of the pythagorean triplet for which the sum = %d is : %d x %d x %d = %d\n", S, a, b, c, prod);
   } else {
      printf ("There is no pythagorean triplet for which a + b + c = %d\n", S);
   }

   return 0;
}
