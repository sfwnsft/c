#include <stdio.h>

int main() {
  int code, qty;

  printf("Enter item code (1-3): \n");
  scanf("%d", &code);

  if (code >= 1 && code <= 3) {
    printf("Enter quantity: \n");
    scanf("%d", &qty);

    switch (code) {
    case 1:
      printf("Total Bill = %d\n", 180 * qty);
      break;
    case 2:
      printf("Total Bill = %d\n", 250 * qty);
      break;
    case 3:
      printf("Total Bill = %d\n", 200 * qty);
      break;
    }
  }

  else {
    printf("Invalid choice\n");
  }

  return 0;
}
