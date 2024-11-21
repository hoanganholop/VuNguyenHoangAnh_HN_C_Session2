#include <stdio.h>

int main() {
    float length=8;  
    float width=7;

    float perimeter = 2 * (length + width); 
    float area = length * width;            
   
    printf("Chu vi cua hinh chu nhat la: %.2f\n", perimeter);  
    printf("Dien tich cua hinh chu nhat la: %.2f\n", area);  

    return 0;
}

