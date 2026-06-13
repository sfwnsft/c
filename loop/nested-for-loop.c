#include<stdio.h>

int main () {
    int i, j;

    for(i=0; i<5; i++) { // Outer Loop
        printf("I is %d\n", i);
        for(j=0; j<5; j++) { // Inner Loop
            printf("J is %d", j);
        }
    }
    return 0;
}               
