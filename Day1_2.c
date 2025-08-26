/*Q2 (User Inputs, Operations & Output)
📋
Write a program to input two numbers and display their sum, difference, product, and quotient.

Show Sample Test Cases
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5
Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2
*/

#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter Any Two Numbers :");
    scanf("%d %d",&a,&b);
    int sum= a+b;
    int difference=a-b;
    int product = a*b;
    float quotient = a/2;
    printf(" Sum=%d \n Diffrence=%d \n Product=%d \n Quotient=%f \n  ",sum,difference,product,quotient);
    return 0 ;
}
