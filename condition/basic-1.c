#include <stdio.h>
int main() {
  int x;

  scanf("%d", &x);

  if (x >= 0) {
    printf("x is positive\n");
  } 
  else {
    printf("x is negative\n");
  }

  return 0;
}
