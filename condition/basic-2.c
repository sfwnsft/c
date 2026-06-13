#include <stdio.h>
int main() {
    int books;

    printf("Enter number of books: ");
    scanf("%d", &books);

    if (books >= 10) {
        printf("Premium Membership\n");
    }
    else if (books >= 5) {
        printf("Standard Membership\n");
    }
    else {
        printf("Basic Membership\n");
    }
    return 0;
}
