// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

void findOnesComplement(char binary[]) {
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid input: Only binary digits (0 or 1) allowed.\n");
            return;
        }
    }
    printf("1's Complement: %s\n", binary);
}

int main() {
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    findOnesComplement(binary);
    return 0;
}
