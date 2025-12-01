// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

typedef enum {
    NAME,
    AGE,
    HEIGHT
} Member;


typedef struct {
    char name[50];
    int age;
    float height;
} Person;
void printMember(Person p, Member m) {
    switch(m) {
        case NAME:
            printf("Name: %s\n", p.name);
            break;
        case AGE:
            printf("Age: %d\n", p.age);
            break;
        case HEIGHT:
            printf("Height: %.2f\n", p.height);
            break;
        default:
            printf("Invalid member\n");
    }
}

int main() {
    Person person = {"Alice", 30, 5.5};
    
    printMember(person, NAME);
    printMember(person, AGE);
    printMember(person, HEIGHT);
    
    return 0;
}
