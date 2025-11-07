// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of odd numbers to sum: ");
    scanf("%d", &n);

    for (int i = 0, num = 1; i < n; i++, num += 2) {
        sum += num;
    }

    printf("Sum of the first %d odd numbers is %d\n", n, sum);
    return 0;
}
