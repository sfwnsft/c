#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);

    for (int b = a; b >= 0; b = b - 3) {
        printf("%d\n", b);
    }

    return 0;
}
