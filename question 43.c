// Write a program to check if a number is a strong number.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int number, sum = 0, temp, digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    while (temp > 0) {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if (sum == number) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}
