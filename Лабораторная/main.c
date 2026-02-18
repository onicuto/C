#include <stdio.h>

int main() {
  const double w = 1.23;
  int a, x, y, oct, hex, unoct, unhex;
  double b;

  printf("enter int(a) and float(b):\n");
  scanf("%i %lf", &a, &b);

  printf("\nproduct of numbers = %.2lf (double)\n", a * b);
  printf("summ of a and const = %.2lf (double)\n", a + w);
  if (a != 0) {
    printf("b/a = %.2lf", b / a);
  }

  printf("\n\tbitwise operations\nenter x and y:\n");
  scanf("%d %d", &x, &y);
  printf("\nx = %d\t~x = %d\ny = %d\t        y>>2 = %d\n", x, ~x, y, y >> 2);
  printf("x&y = %d\tx|y = %d\tx^y = %d\n", x & y, x | y, x ^ y);

  printf("\n\tnumber systems\nenter oct(x) and hex(y):\n");
  scanf("%o %x", &oct, &hex);
  printf("decimal system: x = %d\ty = %d\n", oct, hex);

  printf("\nenter x and y:\n");
  scanf("%i %i", &unoct, &unhex);
  printf("oct system: x = %o\thex system: y = %x\n", unoct, unhex);

  return 0;
}
