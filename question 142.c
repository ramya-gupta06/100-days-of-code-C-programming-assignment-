// Store details of 5 students in an array of structures and print all.

#include <stdio.h>

enum StudentFields { ID, NAME, AGE };

struct Student {
    int id;
    char name[50];
    int age;
};

int main() {
    struct Student students[5] = {
        {101, "Alice", 20},
        {102, "Bob", 21},
        {103, "Charlie", 19},
        {104, "David", 22},
        {105, "Eve", 20}
    };

    printf("Student Details:\n");
    for(int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n\n", students[i].age);
    }

    return 0;
}
