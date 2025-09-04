// 🔁
// Q30 (Loops without Arrays/Strings)
// 📋
// Write a program to reverse a given number.

// Show Sample Test Cases
// Input 1:
// 1234
// Output 1:
// 4321
// Input 2:
// 100
// Output 2:
// 1
#include<stdio.h>
int main(){
    int n;int rem ;int rev=0;
    printf("Enter any number :");
    scanf("%d",&n);
    while (n!=0){
        rem =n%10;
        rev=rev*10+rem;
        n=n/10;

        
    }
    printf("%d",rev);

    return 0;
    

}