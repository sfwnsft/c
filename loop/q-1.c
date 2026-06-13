#include <stdio.h>

int main() {
  int startBalance, monthlySavings, months;

  printf("Enter starting balance: ");
  scanf("%d", &startBalance);
  printf("Enter monthly savings amount: ");
  scanf("%d", &monthlySavings);
  printf("Enter the number of months: ");
  scanf("%d", &months);

  int total = startBalance;
  for (int i = 1; i <= months; i++) {
    total = total + monthlySavings;
    printf("Month %d: Total Savings = %d\n", i, total);
  }

  return 0;
}
