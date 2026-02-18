#include <mpfr.h>
#include <stdio.h>

int main() {
  int digits;
  printf("Введите количество знаков после запятой (например 500 или 5000): ");
  scanf("%d", &digits);

  // Биты точности ≈ число_знаков * log2(10)
  mpfr_prec_t prec = digits * 3.32192809488736; // ~ log2(10)

  mpfr_t pi;
  mpfr_init2(pi, prec);         // инициализация с нужной точностью
  mpfr_const_pi(pi, MPFR_RNDN); // вычисление числа π

  // выводим π с digits знаков после запятой
  mpfr_printf("%.*Rf\n", digits, pi);

  mpfr_clear(pi);
  return 0;
}
