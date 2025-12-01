// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int anum;          
    char name[50];
    int age;
    float salary;
} Employee;

void writeEmployeeData(const char *filename) {
    FILE *fp = fopen(filename, "wb"); 
    if (fp == NULL) {
        perror("Cannot open file for writing");
        exit(EXIT_FAILURE);
    }

    Employee emp;
    char choice;

    do {
        printf("Enter employee number (anum): ");
        scanf("%d", &emp.anum);

        printf("Enter name: ");
        scanf("%s", emp.name);

        printf("Enter age: ");
        scanf("%d", &emp.age);

        printf("Enter salary: ");
        scanf("%f", &emp.salary);

        fwrite(&emp, sizeof(Employee), 1, fp); 

        printf("Add another employee? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
}

void readEmployeeData(const char *filename) {
    FILE *fp = fopen(filename, "rb"); 
    if (fp == NULL) {
        perror("Cannot open file for reading");
        exit(EXIT_FAILURE);
    }

    Employee emp;
    printf("\nEmployee records:\n");
    printf("ANUM\tName\tAge\tSalary\n");

    while (fread(&emp, sizeof(Employee), 1, fp) == 1) {
        printf("%d\t%s\t%d\t%.2f\n", emp.anum, emp.name, emp.age, emp.salary);
    }

    fclose(fp);
}

int main() {
    const char *filename = "employees.bin";

    writeEmployeeData(filename);
    readEmployeeData(filename);

    return 0;
}
