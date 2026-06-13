#include <stdio.h>

int main() {
  int i, j;

  for (i = 0; i < 5; i++) { // Outer Loop
    printf("*\n");
    for (j = 0; j < 5; j++) { // Inner Loop
      printf("*");
    }
  }
  return 0;
}
