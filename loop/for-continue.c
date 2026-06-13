#include<stdio.h>
int main () {

    int a;
    
    printf("Input the digit: \n");
    scanf("%d", &a);

    for(a=0; a<6; a++) {
        if (a==4) {
            continue; //Skips the loop when a == 4
        }
        printf("a is %d\n", a);
    }
    return 0;
}
