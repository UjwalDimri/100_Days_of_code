/*Q7 (User Inputs, Operations & Output)
📋
Write a program to swap two numbers without using a third variable.

Show Sample Test Cases
Input 1:
10 20
Output 1:
After swap: 20 10
Input 2:
7 14
Output 2:
After swap: 14 7
*/
#include<stdio.h>
int main(){
    int a ; int b;
    printf("Enter Two Number : ");
    scanf("%d %d",&a,&b);
    printf("Before swaping a=%d b=%d " "\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swaping a=%d b=%d ",a,b);
    return 0;
   
}
