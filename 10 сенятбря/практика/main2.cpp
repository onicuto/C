#include <stdio.h>
int main() {
  int x = 1 / 10;
  float y = 1.0 / 10.0;
  double z = 1.0 / 10.0;
  printf("int:\n%d\n\n", x);
  printf("float: \n 4\t--\t%.4f\n12\t--\t%.12f\n16\t--\t%.16f\n\n", y, y, y);
  printf("double: \n 4\t--\t%.4f\n12\t--\t%.12f\n16\t--\t%.16f\n\n", z, z, z);
  return 0;
}
