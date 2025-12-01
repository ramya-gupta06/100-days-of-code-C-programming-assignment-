// Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>
#include <string.h>  

int main() {
    char name[100];
    int age;
    FILE *file;

    file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';   
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    fclose(file);

    printf("Data successfully saved to info.txt\n");

    return 0;
}
