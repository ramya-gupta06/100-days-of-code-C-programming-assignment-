// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int negIdx[n];      
    int front = 0, back = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negIdx[back++] = i;
        }
    }

    for (int i = k; i <= n; i++) {
        if (front < back)
            printf("%d ", arr[negIdx[front]]);
        else
            printf("0 ");

        while (front < back && negIdx[front] <= i - k)
            front++;

        if (i < n && arr[i] < 0)
            negIdx[back++] = i;
    }

    return 0;
}
