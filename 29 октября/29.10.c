#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int x[2][3], i, j, A = 0, B = 10;
  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++)
      x[i][j] = rand() % (B - A + 1) + A;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("%3d", x[i][j]);
    }
    printf("\n");
  }
  int ar1[] = {1, 2, 3, 4, 5, 6};
  int *p, sum = 0;
  p = ar1;
  int n = sizeof(ar1) / sizeof(int);
  for (i = 0; i < 6; i++) {
    sum += *(p + i);
  }
  printf("%d", sum);

  int a[] = {10, 20, 30, 40, 50};
  n = sizeof(a) / sizeof(a[0]);
  printf("%p %p %p");
}

int quantity(int ch) {
  int b = 0, kl;
  while (b > 0) {
  }
  return 0;
}
