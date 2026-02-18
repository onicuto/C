#include <cstdio>
#include <stdio.h>
void Hello();
void russia();
int Summa(int x, int y) { return x + y; }
float Sum(float, float);

int main(int argc, char *argv[]) {
  printf("Hello world!\n");
  Hello();
  Hello();
  printf("%d\n", Summa(6, 250));
  russia();
  printf("1\t2\t3\t4\n5\t6\t7\t8\n");
  int n, m;
  scanf("%d %d", &n, &m);
  printf("Number%5d %d\n", n, m);
  printf("Sum of numbers %d\n", Summa(n, m));
  float x, y;
  scanf("%f %f", &x, &y);
  printf("Sum of float %.2f\n", Sum(x, y));
  int a, b;
  printf("How old are you? ");
  scanf("%d", &a);
  printf("How many months have you already lived at %d years old? ", a);
  scanf("%d", &b);
  printf("You have already lived: %d months\n", a * 12 + b);
  return 0;
}

void russia() {
  printf("It seems everything is clear, but nothing is clear at all\n");
}
void Hello() { printf("Hello world!\n"); }
float Sum(float x, float y) { return x + y; }
