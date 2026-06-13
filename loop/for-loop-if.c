// Print the even numbers from 1 to n.

#include<stdio.h>
int main () {
    int n;

    printf("Input the digit: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i=i+1) {
        if(i%2==0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
