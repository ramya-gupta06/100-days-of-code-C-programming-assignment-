// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

void printBinary(int n) {
    int i;
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);  
    int leading_zero = 1; 

    for (i = 0; i < sizeof(int) * 8; i++) {
        if ((n & mask) == 0) {
            if (!leading_zero) {
                printf("0");
            }
        } else {
            printf("1");
            leading_zero = 0;
        }
        mask >>= 1;
    }
    if (leading_zero) {
        
        printf("0");
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Binary representation of %d is: ", number);
    printBinary(number);
    return 0;
}

