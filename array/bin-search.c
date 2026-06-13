#include <stdio.h>
#define SIZE 7

int main() {
    int a[SIZE] = {2, 4, 6, 8, 10, 12, 14};         // a[0]=2, a[1]=4, a[2]=6, a[3]=8, a[4]=10, a[5]=12, a[6]=14
    int target = 10;                                // target=10
    int low = 0, high = SIZE - 1, mid, found = 0;   // low=0, high=6, found=0

    while (low <= high) {                           // 0<=6, 0<=6, 4<=6, 4<=6
        mid = (low + high) / 2;                     // mid=3, mid=5, mid=4
        if (a[mid] == target) {                     // a[3]=8!=10, a[5]=12!=10, a[4]=10==10
            found = 1;                              // found=1
            break;
        }
        if (a[mid] < target) {                      // a[3]=8<10, true
            low = mid + 1;                          // low=4
        }
        else {                                      // a[5]=12>10, true
            high = mid - 1;                         // high=4
        }
    }

    if (found == 1) {                                 
        printf("Found at index: %d\n", mid);        // mid = 4
    }
    else {
        printf("Element not found in the array.\n");
    }

    return 0;
}
