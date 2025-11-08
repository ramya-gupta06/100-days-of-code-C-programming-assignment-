Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int a[10][10];
    int m, n, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Traverse from top-left to bottom-right diagonals
    for(int k = 0; k < m + n - 1; k++) {
        if(k % 2 == 0) { // even diagonal: go upward
            i = (k < m) ? k : m - 1;
            j = (k < m) ? 0 : k - m + 1;
            while(i >= 0 && j < n) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        } else { // odd diagonal: go downward
            j = (k < n) ? k : n - 1;
            i = (k < n) ? 0 : k - n + 1;
            while(j >= 0 && i < m) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");
    return 0;
}
