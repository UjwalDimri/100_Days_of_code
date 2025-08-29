// 🔀
// Q19 (Conditional Statements)
// 📋
// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

// Show Sample Test Cases
// Input 1:
// 3 3 3
// Output 1:
// Equilateral
// Input 2:
// 3 3 4
// Output 2:
// Isosceles
// Input 3:
// 2 3 4
// Output 3:
// Scalene
#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three sides of triangle :");
    scanf("%d %d %d",&x,&y,&z);
    if((x=y)&&(y=z)&&(z=a)){
        printf("Equilateral");
    }else if((x=y)&&(y=z)||(y=z)&&(z=x)){
        printf("Isosecles");
    }else if((x!=y)&&(y!=z)&&(z!=x)){
        printf("Scalene");
    }else {
        printf("Enter vaild");
    }
    return 0;
}