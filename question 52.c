/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main() {
    int pattern[] = {1, 2, 3, 5, 3, 1};
    int i, j;

    for (i = 0; i < 6; i++) {         // loop through each group
        for (j = 0; j < pattern[i]; j++) {
            printf("*\n");            // print stars vertically
        }
        printf("\n");                 // blank line between groups
    }

    return 0;
}
