// Copy all elements of one array to another

#include<stdio.h>
int main () {

    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n], b[n]; // a[n] is the source array, b[n] is the destination array here.

    printf("Enter elements in the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) { // Copy all elements from source to destination array.
        b[i] = a[i];
    }

    printf("Elements of source array are: ");
    for(int i = 0; i < n; i++) { // Print all elements of source array.
        printf("%d", a[i]);
    }

    printf("\nElements of dest. array are: ");
    for(int i = 0; i < n; i++) { // Print all elements of dest array.
        printf("%d", b[i]);
    }

    return 0;
}
