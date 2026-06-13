#include<stdio.h>
int main () {

    int n;

    printf("Input your number: \n");
    scanf("%d", &n);

    if (n > 0) {
        if (n % 2 == 0) {
            printf("Ghum dhorche.\n");
        }
        else if (n % 5 == 0 && n % 11 == 0) {
            printf("Class kore ki hobe?\n");
        }
    }

    else if (n < 0) {
        if (n > -10) {
            if (n < -2) {
                printf("Amar matha.\n");
            }
        }
    }

    else {
        printf("Tomar matha.\n");
    }
    return 0;
}
