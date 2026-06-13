// Print natural numbers from 1 to n.

#include<stdio.h>
int main () {
    
    int n;
    printf("Input your desired number: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
