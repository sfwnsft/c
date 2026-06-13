// Linear Search (Simpler Method)

#include<stdio.h>

int main () {
    int a[5] = {10, 20, 30, 40, 60};
    int found = 0;
    int digit;

    printf("Enter element to search: ");
    scanf("%d", &digit);

    for(int i = 0; i < 5; i++) {
        if (a[i] == digit) {
            found = 1;
        }
    }

    if(found == 1) {
        printf("Element has been found.");
    }

    else {
        printf("Not found.\n");
    }

    return 0;
}
