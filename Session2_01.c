#include <stdio.h>

int main() {
	
    int a = 10;   // Bien 'a' kieu int, luu gia tri 10

    float b = 3.14;  // Bien 'b' kieu float, luu gia tri 3.14

    double c = 3.1415926535;  // Bien 'c' kieu double, luu gia tri pi voi do chính xác cao

    char d = 'A';  // Bien 'd' kieu char, luu ky tu 'A'

    printf("a = %d\n", a);      // In ra gia tri cua a (so nguyen)
    printf("b = %.2f\n", b);    // In ra gia tri cua b (so thuc, lam tron den 2 chu so thap phan)
    printf("c = %.10lf\n", c);  // In ra gia tri cua c (so thuc double, in 10 chu so thap phan)
    printf("d = %c\n", d);      // In ra gia tri cua d (ky tu)
   
    return 0;
}
