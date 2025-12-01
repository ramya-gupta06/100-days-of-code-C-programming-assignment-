// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    int i;

    for (i = 1; i < n; i++) {
        if (max_ending_here + arr[i] > arr[i])
            max_ending_here = max_ending_here + arr[i];
        else
            max_ending_here = arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }

    return max_so_far;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubArraySum(arr, n);
    printf("Maximum sum of contiguous subarray is: %d\n", max_sum);

    return 0;
}
