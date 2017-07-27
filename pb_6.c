//
// The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is
// 25164150 = 25502500 - 338350
//
#include <stdio.h>

#define N 100

static inline int square (int x) {
   return x * x;
}

int main (int argc, char** argv) {
   int i, sum_square, square_sum, diff;

   sum_square = (N * (N + 1) * (2 * N + 1)) / 6;
   square_sum = square ((N * (N + 1)) / 2);
   diff = square_sum - sum_square;

   printf ("The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is %d = %d - %d\n", diff, square_sum, sum_square);

   return 0;
}
