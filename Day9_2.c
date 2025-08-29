// 🔀
// Q18 (Conditional Statements)
// 📋
// Write a program to assign grades based on a percentage input.

// Show Sample Test Cases
// Input 1:
// 95
// Output 1:
// Grade A
// Input 2:
// 82
// Output 2:
// Grade B
// Input 3:
// 68
// Output 3:
// Grade D
// Input 4:
// 50
// Output 4:
// Grade F
#include<stdio.h>
 int main(){
    int percentage ;
    printf("Enter your percentage :");
    scanf(" %d",&percentage);
    if(percentage >= 90){
        printf("Grade A ");
    }else if(percentage>=80){
        printf("Grade B");
    }else if (percentage>=70){
        printf("GradeC");
    }else if (percentage>=60){
        printf("GradeD");
    }
    else if (percentage>=55){
        printf("Grade E");
    }

    else if (percentage>=50){
        printf("Grade F");

    }else if (percentage>=40){
        printf("Grade Fail ");
    }
    return 0;

}