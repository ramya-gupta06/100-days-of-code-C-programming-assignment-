// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        double numerator = 2.0 * i;
        double denominator = 3.0 + 4.0 * (i - 1);
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
