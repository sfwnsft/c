// Find maximum and minimum element in an array

#include <stdio.h>
int main() {

  int n, max, min;

  printf("Enter size of the array: ");
  scanf("%d", &n);

  int a[n];

  printf("Enter elements in the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  max = a[0];
  min = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
  }

  printf("Maximum element = %d\n", max);
  printf("Minimum element = %d\n", min);

  return 0;
}
