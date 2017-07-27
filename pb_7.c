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
   int is_prime = true;
   
   if ((x > 2) && !(x % 2)){
      is_prime = false;
   }
   for (i = 3; i <= x / 2 && is_prime; i+=2){
      is_prime = (x % i) ? true : false;
   }
   return is_prime;
}

int main (int argc, char** argv) {
   int i, count;

   for (i = 2, count = 0; count < Nth; i++) {
      count += isPrime (i);
   }
   printf ("The %dth prime number is %d\n", Nth, --i);

   return 0;
}
