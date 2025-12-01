// Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ?n / 2? times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int findCandidate(int nums[], int n) {
    int candidate = nums[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate)
            count++;
        else
            count--;
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }
    return candidate;
}

int isMajority(int nums[], int n, int candidate) {
    int count = 0;
    for (int i = 0; i < n; i++)
        if (nums[i] == candidate)
            count++;
    return count > n / 2;
}

int main() {
    int n;
    scanf("%d", &n);               
    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);    

    int candidate = findCandidate(nums, n);
    if (isMajority(nums, n, candidate))
        printf("%d\n", candidate);
    else
        printf("-1\n");
    return 0;
}
