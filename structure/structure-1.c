#include<stdio.h>

int main () {

    struct transport {
        char type[100];
        int id;
        float mileage;
    };

    struct transport t1;
    struct transport t2;

    scanf("%s %d %f", t1.type, &t1.id, &t1.mileage);
    scanf("%s %d %f", t2.type, &t2.id, &t2.mileage);

    printf("%s %d %f", t1.type, t1.id, t1.mileage);
    printf("%s %d %f", t2.type, t2.id, t2.mileage);
    
    return 0;
}