#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void per() {
  int a, sum = 0, inp;
  srand(time(NULL));
  printf("Введите размер квадратной матрицы: ");
  scanf("%d", &a);
  int n = a - 1;
  int **mas = calloc(a, sizeof(int *));
  for (int i = 0; i < a; i++) {
    mas[i] = calloc(a, sizeof(int));
  }

  printf("\nВыберите тип ввода данных:\n\t1. Вручную\n\t2. Автоматически\n\n");
  scanf("%d", &inp);
  if (inp == 2) {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        mas[i][j] = rand() % 100;
        printf("mas[%d][%d] = %d\n", i, j, mas[i][j]);
        if ((i + j != n) && (i + j != 0) && (i + j != n * 2)) {
          printf("sum = %d + %d = %d\n", sum, mas[i][j], sum + mas[i][j]);
          sum = sum + mas[i][j];
        }
      }
    }
  } else {
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        scanf("%d", &mas[i][j]);
      }
    }
    for (int i = 0; i < a; i++) {
      for (int j = 0; j < a; j++) {
        printf("mas[%d][%d] = %d\n", i, j, mas[i][j]);
        if ((i + j != n) && (i + j != 0) && (i + j != n * 2)) {
          printf("sum = %d + %d = %d\n", sum, mas[i][j], sum + mas[i][j]);
          sum = sum + mas[i][j];
        }
      }
    }
  }
  printf("Сумма диагоналей матрицы = %d", sum);
  for (int i = 0; i < a; i++) {
    free(mas[i]);
  }
  free(mas);
}

void vtor() {
  char text[1000];
  int freq[26] = {0};
  int count = 0;

  printf("Введите текст (только латинские буквы и любые другие символы):\n");
  getchar();
  fgets(text, sizeof(text), stdin);

  for (int i = 0; text[i] != '\0'; i++) {
    char c = text[i];
    if (c >= 'A' && c <= 'Z') {
      freq[c - 'A']++;
      count++;
    } else if (c >= 'a' && c <= 'z') {
      freq[c - 'a']++;
      count++;
    }
  }

  printf("\nВсего латинских букв: %d\n", count);
  printf("Частота появления каждой буквы:\n");
  for (int i = 0; i < 26; i++) {
    if (freq[i] > 0) {
      printf("%c / %c : %d\n", 'A' + i, 'a' + i, freq[i]);
    }
  }
}
