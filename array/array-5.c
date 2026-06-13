// Find second largest element in an array

#include <stdio.h>

int main() {
  int n, largest, second_largest;

  printf("Enter size of the array: ");
  scanf("%d", &n);

  int a[n];

  printf("Enter elements in the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  largest = a[0];
  second_largest = -9999; 

  for (int i = 1; i < n; i++) {
    if (a[i] > largest) {
      second_largest = largest;
      largest = a[i];
    } 
    else if (a[i] < largest && a[i] > second_largest) {
      second_largest = a[i];
    }
  }

  printf("Second largest element = %d\n", second_largest);

  return 0;
}
