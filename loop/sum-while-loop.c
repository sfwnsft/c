#include<stdio.h>

int main () {
    int n, count=0, sum=0;
    scanf("%d", &n);

    while(n!=0) {
        int x=n%10;
        printf("%d\n", x);
        sum=sum+x;
        n=n/10;
        count++;
    }

    printf("Number of digits are: %d\n", count);
    printf("Sum=%d\n", sum);

    return 0;
}
