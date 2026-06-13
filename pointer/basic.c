#include<stdio.h>

int main () {
    int cookies = 10;
    int *ptr = &cookies;

    printf("Quantity of cookies: %d\n", cookies);
    printf("Quantity of cookies using pointer: %d\n", *ptr);
    
    printf("Memory address of that variable: %p\n", &cookies);

    return 0;
}