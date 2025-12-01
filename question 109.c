// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int maxSumSubarray(int arr[], int n, int k) {
    int max_sum = 0, window_sum = 0;

    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }
    max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum += arr[i] - arr[i - k];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of the subarray (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    int result = maxSumSubarray(arr, n, k);
    printf("Maximum sum of subarrays of size %d is: %d\n", k, result);

    return 0;
}
