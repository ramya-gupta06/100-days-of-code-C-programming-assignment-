// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    int left[numsSize];
    int right[numsSize];

    left[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        left[i] = nums[i - 1] * left[i - 1];
    }

    right[numsSize - 1] = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        right[i] = nums[i + 1] * right[i + 1];
    }

    for (int i = 0; i < numsSize; i++) {
        answer[i] = left[i] * right[i];
    }
}

int main() {
    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the elements: ");
    for (int i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[numsSize];
    productExceptSelf(nums, numsSize, answer);

    printf("Output array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}
