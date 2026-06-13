// Count even and odd elements in array

#include <stdio.h>
int main() {

  int n, even = 0, odd = 0;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int a[n];

  printf("Enter elements in the array: ");
  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  for(int i = 0; i < n; i++) {
    if(a[i] % 2 == 0) {
      even++;
    }
    else {
      odd++;
    }
  }

  printf("Total even numbers: %d\n", even);
  printf("Total odd numbers: %d\n", odd);

  return 0;
}
