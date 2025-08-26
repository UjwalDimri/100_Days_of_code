/*Q6 (User Inputs, Operations & Output)
📋
Write a program to swap two numbers using a third variable.

Show Sample Test Cases
Input 1:
3 5
Output 1:
After swap: 5 3
Input 2:
-1 1
Output 2:
After swap: 1 -1
*/

#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter any two numbers :");
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("a=%d b=%d c=%d",a,b,c);
    
    return 0;
}