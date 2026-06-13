#include <stdio.h>
int main() { 
    int choice;
    float r, s, l, w;
    
    printf("Enter Choice:\n 1. Circle\n 2. Square\n 3. Rectangle\n ");
    scanf("%d", &choice);
    
    switch(choice) {      
        case 1: 
        printf("Enter Radius: "); 
        scanf("%f", &r); 
        printf("Area of Circle: %f\n", 3.1416*r*r); 
        break;
        
        case 2: 
        printf("Enter One Side: "); 
        scanf("%f", &s); 
        printf("Area of Square: %f\n", s*s); 
        break;
        
        case 3: 
        printf("Enter Length: "); 
        scanf("%f", &l);
        printf("Enter Width: ");
        scanf("%f", &w); 
        printf("Area of Rectangle: %f\n", l*w); 
        break;
        
        default: 
        printf("Invalid choice\n");
    }
    return 0;
}
