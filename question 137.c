// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role currentRole = ADMIN; 

    switch(currentRole) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! Please sign up for more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }
    return 0;
}
