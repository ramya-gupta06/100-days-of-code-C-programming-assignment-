// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= 2*n; i += 2) {
        sum += (float)i / (i + 1);
    }

    printf("Sum of the series up to %d terms is: %.4f\n", n, sum);

    return 0;
}
