#include<stdio.h>
int main () {

    int a;
    
    scanf("%d", &a);

    for(a=0; a<6; a++) {
        if (a==3) {
            printf("Hello\n");
        }
        else if (a==4) {
            break; // Stops at 4
        }
        printf("a is %d\n", a);
    }
    return 0;
}
