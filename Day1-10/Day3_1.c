/*Q5 (User Inputs, Operations & Output)
📋
Write a program to convert temperature from Celsius to Fahrenheit.

Show Sample Test Cases
Input 1:
0
Output 1:
Fahrenheit=32
Input 2:
100
Output 2:
Fahrenheit=212
*/

#include<stdio.h>
int main(){
    float t_c;
    printf("Enter Temperature in Celsius :");
    scanf("%f",&t_c);
    float t_f = (t_c*9/5)+32;
    printf("Tempereture in Fahrenheit: %f",t_f);
    
    return 0;

}