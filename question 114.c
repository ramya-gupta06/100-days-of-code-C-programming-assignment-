// Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int lastIndex[256];
    int i;
    for (i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLen = 0;
    int start = 0;  

    for (i = 0; s[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }

        lastIndex[ch] = i;

        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }

    return maxLen;
}

int main() {
    char s[1000];
    if (fgets(s, sizeof(s), stdin) != NULL) {
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }

        int result = lengthOfLongestSubstring(s);
        printf("%d\n", result);
    }

    return 0;
}
