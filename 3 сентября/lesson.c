#include "func.cpp"

int main(void) {
  clock_t start_time = clock(); // Засекаем время начала

  printf("sum=%d\nsub=%d\n", Sum(5, 2),
         Sub(5, 2)); // Здесь находится код, время выполнения которого вы хотите
                     // измерить
  // Например, какой-то цикл или функция
  for (int i = 0; i < 1000000; i++) {
    // Некая операция
  }

  clock_t end_time = clock(); // Засекаем время окончания

  // Пересчитываем такты в секунды и выводим результат
  double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
  printf("Время выполнения: %f секунд\n", elapsed_time);

  return 0;
}
