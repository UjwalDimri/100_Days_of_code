// 🔄
// Q50 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
// Show Sample Test Cases
// Input 1:
// Output 1:
// *****
//  ****
//   ***
//    **
//     *
// Input 2:
// Output 2:
// Note: Spaces indicate indentation. 
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(j<i){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
    printf("\n");
    }
    
}
