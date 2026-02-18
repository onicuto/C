#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p1;
  char *p2;
  float *p3;
  int n;
  p1 = (int *)malloc(sizeof(int));
  p2 = (char *)malloc(sizeof(char));
  printf("n = ");
  scanf("%d", &n);
  p3 = (float *)malloc(n * sizeof(float));
  *p1 = 18;
  *p2 = 'J';
  for (int i = 0; i < n; i++) {
    printf("p3[%d] = ", i);
    scanf("%f", &p3[i]);
  }
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("p3[%d] = %.2f\n", i, p3[i]);
  }
}
