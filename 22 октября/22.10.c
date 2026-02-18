#include <stdio.h>

int main() {
  int arr[100], arr2[100], i, n, max, j;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr2[i]);
  }
  j = 0;
  for (int i = 0; i < n; i++) {
    j = (arr[i] == arr2[i]);
  }
  if (j == 1) {
    printf("Da");
  } else {
    printf("net");
  }
}
