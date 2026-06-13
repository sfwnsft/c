#include<stdio.h>

int main () {
    int swe[5] = {10, 20, 30, 40, 50};
    int digit;
    int found = 0;

    printf("Enter digit to search: ");
    scanf("%d", &digit);

    for(int i = 0; i < 5; i++) {
        if(swe[i] == digit) {
            found = 1;
            printf("Digit %d is found at %d position.\n", swe[i], i+1);
            break;
        }
    }

    if (found == 0) {
        printf("Not found.\n");
    }

    return 0;
}
