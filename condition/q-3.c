#include <stdio.h>

int main() {
    int rain;
    
    printf("Enter rain value: ");
    scanf("%d", &rain);

    if (rain == 0 || rain > 12) {
        printf("coding geya tel lene\n");
        printf("sleeps\n");
    }
    else if (rain % 2 == 0) {
        printf("code = rain * 2\n");
        printf("code = %d\n", rain * 2);
    }
    else {
        printf("code = rain * 3\n");
        printf("code = %d\n", rain * 3);
    }
    
    return 0;
}
