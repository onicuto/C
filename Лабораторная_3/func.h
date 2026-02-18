#include <stdio.h>
#include <string.h>

// -------------------------------
// Функция определения знака зодиака
// -------------------------------
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
