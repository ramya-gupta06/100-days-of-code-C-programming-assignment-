//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include <stdio.h>
int main()
{
    int n1,n2;
    int s=0,dif=0;
    int p=1;
    int d;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    s=n1+n2;
    dif=n1-n2;
    p=n1*n2;
    d=n1/n2;
    printf("Sum= %d,Diff= %d , Product=%d ,Quotient=%d ,s,dif,p,d");

    return 0;
}