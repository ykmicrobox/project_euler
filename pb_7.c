//
// The 10001th prime number is 104743
//
#include <stdio.h>
#include <math.h>

#define false 0
#define true 1

#define Nth 10001

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
   int i, count;

   for (i = 2, count = 0; count < Nth; i++) {
      count += isPrime (i);
   }
   printf ("The %dth prime number is %d\n", Nth, --i);

   return 0;
}
