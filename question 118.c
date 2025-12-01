// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers between 0 to %d (one number is missing):\n", n, n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int total_sum = n * (n + 1) / 2;

    int arr_sum = 0;
    for (int i = 0; i < n; i++) {
        arr_sum += arr[i];
    }

    int missing_number = total_sum - arr_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
