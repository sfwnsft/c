#include <stdio.h>
int main () {
    int n;

    printf("Input your number: \n");
    scanf("%d", &n);

    while (n>= 0) {
        printf("Here are the remaining numbers: %d\n", n);
        n--;
    }
    return 0;
}
