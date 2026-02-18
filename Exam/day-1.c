#include <stdio.h>

int main() {
  int a;
  char b;
  long c;
  float d, max;
  printf("a = %lu\nb = %lu\nc = %lu\nd = %lu\n", sizeof(a), sizeof(b),
         sizeof(c), sizeof(d));
  a = 5;
  d = 5.555;
  max = (a > d) ? a : d;
  printf("\nmax = %f\n", max);
  int val = 10;
  int *ptr = &val;
  int result = -*--ptr;
  printf("\nresult = %d\nptr = %d", result, *ptr);
  int *ptr2 = &a;
  printf("\nptr2 = %p\n&2 = %p\n(void*)ptr = %p\n(void*)&a = %p\n", ptr2, &a,
         (void *)ptr2, (void *)&a);
  int z = 0b1111, x = 0b0011;    // z = 15 x = 3
  printf("\nz & x = %d", z & x); // z & x = 0011
  printf("\nz | x = %d", z | z); // z | x = 1111
  printf("\nz ^ x = %d", z ^ x); // z ^ x = 1100
  printf("\n~z = %d", ~z);       // ~z = 0000
}
