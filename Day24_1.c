// 🔄
// Q47 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****
// Show Sample Test Cases
// Input 1:
// Output 1:
// *
// **
// ***
// ****
// ***** 
#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}
