// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>
int findFirst(int nums[], int n, int target) {
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the target: ");
    scanf("%d", &target);

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    if (first == -1) {
        printf("-1 -1\n");
    } else {
        printf("%d %d\n", first, last);
    }
    return 0;
}
