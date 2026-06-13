// Read and print elements of array

#include<stdio.h>
int main () {
    int n;

    printf("Enter the size of variable: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        printf("Enter the values of variable: ");
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Values of variable: %d\n", a[i]);
    }

    return 0;
}
