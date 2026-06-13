#include<stdio.h>

int main () {

    int a;
    scanf("%d", &a);

    for(int b=0; b<=a; b=b+3) {
        printf("%d\n", b);
    }

    return 0;
}
