//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main()
{
    int temp;
    int tempf;
    printf("Enter temperature in celcius:");
    scanf("%d",&temp);
    tempf=((temp*(9/5))+32);
    printf("Farenheit=%d ",tempf);

    return 0;

}