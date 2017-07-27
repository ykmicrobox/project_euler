#include <stdio.h>

#define ROOF 90.l

int main (int argc, char **argv) {
   long int x0 = 1.l, x1 = 2.l, sum = x0 + x1;

   while (x1 < ROOF) {
      x1 += x0;
      x0 = x1 - x0;
      sum += x1;
   }
   sum -= x1;
   printf ("Sum = %ld\n", sum);

   return 0;
}
