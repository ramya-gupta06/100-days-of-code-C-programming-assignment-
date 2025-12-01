// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

typedef enum {
    EMP_ID,
    EMP_NAME,
    EMP_JOINING_DATE
} EmployeeField;

typedef struct {
    int day;
    int month;
    int year;
} Date;
typedef struct {
    int id;
    char name[50];
    Date joiningDate;
} Employee;
void printEmployeeDetail(Employee emp, EmployeeField field) {
    switch(field) {
        case EMP_ID:
            printf("Employee ID: %d\n", emp.id);
            break;
        case EMP_NAME:
            printf("Employee Name: %s\n", emp.name);
            break;
        case EMP_JOINING_DATE:
            printf("Joining Date: %02d-%02d-%d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
            break;
        default:
            printf("Invalid field\n");
    }
}

int main() {
    Employee emp1 = {101, "John Doe", {15, 8, 2020}};

    printf("Details of Employee:\n");
    printEmployeeDetail(emp1, EMP_ID);
    printEmployeeDetail(emp1, EMP_NAME);
    printEmployeeDetail(emp1, EMP_JOINING_DATE);

    return 0;
}
