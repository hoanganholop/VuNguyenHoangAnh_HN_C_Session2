#include <stdio.h>

int main() {
    
    float side = 10.8; 

    float perimeter = 4 * side;    
    float area = side * side;       

    // In k?t qu? ra màn hình
    printf("Chu vi hinh vuong la: %.2f\n", perimeter); 
    printf("Dien tich hinh vuong la: %.2f\n", area);  

    return 0;
}

