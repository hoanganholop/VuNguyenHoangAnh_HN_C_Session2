#include <stdio.h>

int main() {
    int a = 10;  
    int b = 8;   
  
    int sum = a + b;
	int difference = a - b;
	int product = a * b;
    int quotient = a / b;  

    printf("Tong cua a va b la: %d\n", sum);
      printf("Hieu cua a va b la: %d\n", difference); 
    printf("Tich cua a va b la: %d\n", product);  
    printf("Thuong cua a va b la: %d\n", quotient);

    return 0;
}

