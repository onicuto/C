#include <stdio.h>

int main() {
  int n, temp;
  int max, min;

  printf("Введите количество дней: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Неверное количество.\n");
    return 0;
  }

  printf("Введите температуры:\n");
  scanf("%d", &temp);
  max = min = temp;

  for (int i = 2; i <= n; i++) {
    scanf("%d", &temp);
    if (temp > max)
      max = temp;
    if (temp < min)
      min = temp;
  }

  printf("Максимальная температура: %d\n", max);
  printf("Минимальная температура: %d\n", min);

  return 0;
}
