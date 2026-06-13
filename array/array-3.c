// Find sum of all array elements

#include<stdio.h>
int main () {

    int n, sum=0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Sum of all elements of array = %d\n", sum);

    return 0;
}
