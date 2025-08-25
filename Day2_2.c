/*Write a program to calculate the area and circumference of a circle given its radius.

Show Sample Test Cases
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96
Input 2:
3
Output 2:
Area=28.27, Circumference=18.85
*/

#include<stdio.h>
int main(){
    int Radius;
    printf("Enter Radius of a circle :");
    scanf("%d",&Radius);
    float Area = 3.14*Radius*Radius;
    float circumference=2*3.14*Radius;
    printf("Area=%f \n Circumference=%f \n",Area,circumference);
    return 0;
}