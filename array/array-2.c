// Print all negative elements in an array

#include<stdio.h>
int main () {

    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in array: ");

    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    printf("All negative elements in array: ");

    for(int i=0; i<n; i++) {
        if(a[i]<0) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
