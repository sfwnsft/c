#include <stdio.h>

int main() {
  float father, mother, brother, purchaseAmount, totalMoney, finalAmount, remaining;
  int method;

  printf("Enter money from father: ");
  scanf("%f", &father);
  printf("Enter money from mother: ");
  scanf("%f", &mother);
  printf("Enter money from brother: ");
  scanf("%f", &brother);
  printf("Enter purchase amount: ");
  scanf("%f", &purchaseAmount);
  printf("Enter payment method (1 for Mobile Banking, 0 for Cash): ");
  scanf("%d", &method);

  totalMoney = father + mother + brother;

  printf("Total Money Available: %.2f\n", totalMoney);

  if (method == 1) {
    finalAmount = purchaseAmount * 0.85; // 15% discount
    printf("Final Purchase Amount After 15%% Discount: %.2f\n", finalAmount);
  } else {
    finalAmount = purchaseAmount;
    printf("Final Purchase Amount: %.2f\n", finalAmount);
  }

  remaining = totalMoney - finalAmount;

  printf("Remaining Money: %.2f\n", remaining);

  return 0;
}
