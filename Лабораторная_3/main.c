#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Структура человека
typedef struct {
  char surname[50];
  int day;
  int month;
  int year;
  char zodiac[20];
} Person;

// Функция определения знака зодиака
void getZodiac(int d, int m, char z[]) {
  if ((d >= 21 && m == 3) || (d <= 20 && m == 4))
    strcpy(z, "Овен");
  else if ((d >= 21 && m == 4) || (d <= 21 && m == 5))
    strcpy(z, "Телец");
  else if ((d >= 22 && m == 5) || (d <= 21 && m == 6))
    strcpy(z, "Близнецы");
  else if ((d >= 22 && m == 6) || (d <= 22 && m == 7))
    strcpy(z, "Рак");
  else if ((d >= 23 && m == 7) || (d <= 21 && m == 8))
    strcpy(z, "Лев");
  else if ((d >= 22 && m == 8) || (d <= 23 && m == 9))
    strcpy(z, "Дева");
  else if ((d >= 24 && m == 9) || (d <= 23 && m == 10))
    strcpy(z, "Весы");
  else if ((d >= 24 && m == 10) || (d <= 22 && m == 11))
    strcpy(z, "Скорпион");
  else if ((d >= 23 && m == 11) || (d <= 22 && m == 12))
    strcpy(z, "Стрелец");
  else if ((d >= 23 && m == 12) || (d <= 20 && m == 1))
    strcpy(z, "Козерог");
  else if ((d >= 21 && m == 1) || (d <= 19 && m == 2))
    strcpy(z, "Водолей");
  else
    strcpy(z, "Рыбы");
}

// Просмотр файла
void viewFile() {
  FILE *f = fopen("people.txt", "r");
  if (!f) {
    printf("Файл ещё не создан!\n");
    return;
  }

  char line[200];
  printf("\n--- Содержимое people.txt ---\n");
  while (fgets(line, sizeof(line), f))
    printf("%s", line);

  fclose(f);
}

// Чтение данных из файла в массив (для сортировки и поиска)
int readFromFile(Person people[]) {
  FILE *f = fopen("people.txt", "r");
  if (!f) {
    return 0;
  }

  int count = 0;
  while (fscanf(f, "%s %d.%d.%d %s", people[count].surname, &people[count].day,
                &people[count].month, &people[count].year,
                people[count].zodiac) == 5) {
    count++;
  }

  fclose(f);
  return count;
}

// Сортировка пузырьком по дате рождения
void sortByDate(Person p[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      int date1 = p[j].year * 10000 + p[j].month * 100 + p[j].day;
      int date2 = p[j + 1].year * 10000 + p[j + 1].month * 100 + p[j + 1].day;

      if (date1 > date2) {
        Person temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
    }
  }
}

// Главная программа
int main() {
  int n;
  printf("Введите количество людей: ");
  scanf("%d", &n);

  FILE *f = fopen("people.txt", "w");
  if (!f) {
    printf("Ошибка при открытии файла для записи!\n");
    return 1;
  }

  // Ввод данных и запись сразу в файл
  for (int i = 0; i < n; i++) {
    Person p;

    printf("\nФамилия: ");
    scanf("%s", p.surname);

    printf("Дата рождения (дд мм гггг): ");
    scanf("%d %d %d", &p.day, &p.month, &p.year);

    getZodiac(p.day, p.month, p.zodiac);

    // Запись в файл
    fprintf(f, "%s %02d.%02d.%04d %s\n", p.surname, p.day, p.month, p.year,
            p.zodiac);
  }

  fclose(f);
  printf("\nДанные сохранены в people.txt\n");

  // Чтение данных из файла для дальнейшей обработки
  Person people[100]; // Максимальное количество людей
  int count = readFromFile(people);

  if (count == 0) {
    printf("Не удалось прочитать данные из файла!\n");
    return 1;
  }

  // Сортировка данных
  sortByDate(people, count);

  // Выбор действия
  int action;
  printf("\n\t\tВыберите действие: ");
  printf("\n1. Поиск людей по знаку зодиака");
  printf("\n2. Вывод списка людей.\n");
  scanf("%d", &action);

  if (action == 1) {
    char needed[20];
    printf("\nВведите знак Зодиака для поиска: ");
    scanf("%s", needed);

    printf("\nЛюди со знаком Зодиака %s:\n", needed);
    int found = 0;

    for (int i = 0; i < count; i++) {
      if (strcmp(people[i].zodiac, needed) == 0) {
        printf("%s — %02d.%02d.%04d\n", people[i].surname, people[i].day,
               people[i].month, people[i].year);
        found = 1;
      }
    }

    if (!found)
      printf("Нет людей с таким знаком Зодиака.\n");
  } else {
    viewFile();
  }

  return 0;
}
