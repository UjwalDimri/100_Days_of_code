/*Write a program to input two numbers and display their sum.
Show Sample Test Cases
 Input 1:
  3 4
 Output 1:
Sum = 7
Input 2:
 -1 20
Output 2:
Sum = 19
*/


#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    int sum = a+b;
    printf("Sum of number is : %d",sum);
}
