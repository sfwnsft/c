// Count negative elements in array

#include<stdio.h>
int main () {

    int n, count = 0;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements in the array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

   for (int i = 0; i < n; i++) {
       
       if(a[i] < 0) {
           count++;
       }
   }

   printf("Total negative elements in array: %d\n", count);

   return 0;
}
