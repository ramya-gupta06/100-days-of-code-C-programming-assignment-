// Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>

void printMaxInSubarrays(int arr[], int n, int k) {
    int max;
    for (int i = 0; i <= n - k; i++) {
        max = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d ", max);
    }
    printf("\n");
}

int main() {
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    printMaxInSubarrays(arr, n, k);
    return 0;
}
