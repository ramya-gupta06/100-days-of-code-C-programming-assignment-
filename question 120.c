// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

void toSentenceCase(char str[]) {
    int i = 0;
    int capitalizeNext = 1; 

    while (str[i]) {
        if (capitalizeNext && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalizeNext = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalizeNext = 1;
        }

        i++;
    }
}

int main() {
    char str[1000];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toSentenceCase(str);

    printf("Sentence case: %s", str);

    return 0;
}
