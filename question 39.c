// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int product_of_odd_digits(int number) {
    int product = 1;
    int found_odd = 0;
    
    while (number > 0) {
        int digit = number % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found_odd = 1;
        }
        number /= 10;
    }
    
    if (found_odd)
        return product;
    else
        return 0;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = product_of_odd_digits(num);
    
    if (result == 0)
        printf("No odd digits found in the number.\n");
    else
        printf("Product of odd digits: %d\n", result);
    
    return 0;
}
