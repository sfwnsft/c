#include<stdio.h>

int main () {
    int n;

    printf("Input the number: \n");
    scanf("%d", &n);

    do {
        printf("Value of n:%d\n", n);
        n++;
    } while(n<20);

    return 0;
}
