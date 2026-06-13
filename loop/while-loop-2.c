#include<stdio.h>
int main () {

    int n, count=0;

    scanf("%d", &n);

    while (n!=0) {
        int x=n%10;
        printf("%d\n", x);
        n=n/10;
        count++;
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
