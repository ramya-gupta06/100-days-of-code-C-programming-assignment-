// Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Level {
    LOW,        
    MEDIUM,     
    HIGH        
};

int main() {
    enum Level myVar = MEDIUM;
    
    printf("LOW = %d\n", LOW);        
    printf("MEDIUM = %d\n", MEDIUM);  
    printf("HIGH = %d\n", HIGH);      
    printf("myVar = %d\n", myVar);    

    enum LevelCustom {
        LOWC = 10,
        MEDIUMC = 20,
        HIGHC = 30
    };

    printf("LOWC = %d\n", LOWC);        
    printf("MEDIUMC = %d\n", MEDIUMC);   
    printf("HIGHC = %d\n", HIGHC);       

    return 0;
}
