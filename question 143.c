// Find and print the student with the highest marks.

#include <stdio.h>

enum Students { Alice, Bob, Charlie, David, MaxStudents };

int main() {
    int marks[MaxStudents] = {85, 92, 88, 95};

    int highestMarks = marks[0];
    int topStudent = Alice;

    for (int i = 1; i < MaxStudents; i++) {
        if (marks[i] > highestMarks) {
            highestMarks = marks[i];
            topStudent = i;
        }
    }
    const char* studentNames[] = {"Alice", "Bob", "Charlie", "David"};

    printf("Top student in C is %s with marks %d\n", studentNames[topStudent], highestMarks);

    return 0;
}
