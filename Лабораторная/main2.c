#include <stdio.h>

int main() {
  int a, b;

  printf("Enter the interval limits (a b): ");
  scanf("%d %d", &a, &b);

  if (a & 1) {
    a++;
  }

  printf("Even numbers in the interval: ");
  for (int i = a; i <= b; i += 2) {
    printf("%d ", i);
  }

  printf("\n");
  return 0;
}
