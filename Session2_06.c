#include <stdio.h>

int main() {
    const float pi = 3.14;
    float radius = 8;   
    
    float circumference = 2 * pi  * radius;   
    float area = pi * radius * radius;  

 
    printf("Chu vi cua hinh tron la: %.2f\n", circumference);  
    printf("Dien tich cua hinh tron la: %.2f\n", area);    

    return 0;
}

