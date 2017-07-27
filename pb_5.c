//
// 232792560 is The smallest number that can be divided by each of the numbers from 1 to 20 without any reminder
//
#include <stdio.h>

#define false 0
#define true 1

int main (int argc, char** argv) {
   int d , n = 20;
   int reminder;

   do {
      n++;
      reminder = false;
      for (d = 1; d <= 20 && !reminder; d++) {
         reminder += (n % d);
      }
   } while (reminder);
   printf ("%d is The smallest number that can be divided by each of the numbers from 1 to 20 without any reminder\n", n);

   return 0;
}
