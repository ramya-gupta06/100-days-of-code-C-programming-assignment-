/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int a[10][10], i, j, m, n, k, distinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check distinctness of diagonal elements
    for(i = 0; i < m; i++) {
        for(k = i + 1; k < n; k++) {
            if(a[i][i] == a[k][k]) {
                distinct = 0;
                break;
            }
        }
        if(distinct == 0)
            break;
    }

    if(distinct == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
