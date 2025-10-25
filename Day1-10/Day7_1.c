// 🔀
// Q13 (Conditional Statements)
// 📋
// Write a program to input a year and check whether it is a leap year or not using conditional statements.

// Show Sample Test Cases
// Input 1:
// 2020
// Output 1:
// Leap year
// Input 2:
// 1900
// Output 2:
// Not a leap year
// Input 3:
// 2000
// Output 3:
// Leap year
// Year is a leap year if divisible by 4 but not 100, except if divisible by 400 
#include<stdio.h>
int main(){
    int n;
    printf("Enter a year:");
    scanf("%d",&n);
    if(n%400==0){
        printf(" Leap year ");
    }
    else if ((n%4==0)&&(n%100!=00)){
        printf(" Leap Year ");
        

    } else {
        printf("Not a Leap Year");

    }
    
    return 0;
    

}
