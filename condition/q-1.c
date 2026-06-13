#include <stdio.h>

int main () {
    int balance = 1000, result;

    for (int i = 1; i <= 5; i++) {
        printf("Round %d result (1 = Win, 0 = Lose): ", i);
        scanf("%d", &result);
        if (result == 1) {
            balance += 500;
        }
        else {
            balance -= 500;
        }
        if (balance <= 0) {
            printf("Player Eliminated!\n");
            printf("Balance reached 0.\n");
            return 0;
        }
    }

    printf("Final Balance: %d\n", balance);
    printf("Status: Survived!\n");

    return 0;
}
