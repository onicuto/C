#include <limits.h>
#include <stdio.h>
int Sum() {
  int c = 0;
  for (int i = 1; i < 1000000; i++)
    ;
  c = c + 1000000;
  return c;
}
int main() {
  printf("\n%f\n", Sum());
  return 0;
}
