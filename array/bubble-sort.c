#include <stdio.h>
#define SIZE 5

int main() {
    int a[SIZE] = {5, 3, 8, 1, 4};              // a[0]=5, a[1]=3, a[2]=8, a[3]=1, a[4]=4
    int i, j, temp;

    for (i = 0; i < SIZE; i++) {                // i=0,1,2,3,4
        for (j = 0; j < SIZE - i - 1; j++) {    // j=0,1,2,3 | j=0,1,2 | j=0,1 | j=0
            if (a[j] > a[j+1]) {                // swap if left > right
                temp = a[j];                    // temp=5, temp=8, temp=4
                a[j] = a[j+1];                  // {3,5,8,1,4} -> {3,5,1,8,4} -> {3,5,1,4,8}
                a[j+1] = temp;
            }
        }
    }                                           // after all passes: {1,3,4,5,8}

    for (i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);                    // 1 3 4 5 8
    }

    return 0;
}
