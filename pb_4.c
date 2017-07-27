//
// The largest palindrome made from the product of two 3-digit numbers is : 906609 = 913 * 993
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define false 0
#define true 1

typedef struct palindrome_s {
   int x;
   int y;
   int prod;
} palindrome_t;

int main (int argc, char ** argv) {
   int i, j, k, prod;
   int is_palindrome;
   char prod_s[8];
   palindrome_t largest_palindrome = {0, 0, 0};

   for (i = 101; i < 1000; i++) {
      for (j = 101; j < 1000; j++) {
         is_palindrome = true;
         prod = i * j;
         sprintf (prod_s, "%d", prod);
         for (k = 0; k < strlen (prod_s) / 2 && is_palindrome == true; k++) {
            if (!(prod_s[k] == prod_s[strlen (prod_s) - k - 1])) {
               is_palindrome = false;
            }
         }
         if (is_palindrome && prod > largest_palindrome.prod) {
            largest_palindrome.prod = prod;
            largest_palindrome.x = i;
            largest_palindrome.y = j;
         }
      }
   }
   printf ("The largest palindrome made from the product of two 3-digit numbers is : %d = %d * %d\n", largest_palindrome.prod, largest_palindrome.x, largest_palindrome.y);

   return 0;
}
