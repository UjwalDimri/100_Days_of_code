// 🔁
// Q28 (Loops without Arrays/Strings)
// 📋
// Write a program to print the product of even numbers from 1 to n.

// Show Sample Test Cases
// Input 1:
// 4
// Output 1:
// 8 (2 * 4)
// Input 2:
// 6
// Output 2:
// 48 (2 * 4 * 6) 
#include<stdio.h>
int main(){
    int n;int product =1;
    printf("Enter any number :");
    scanf("%d",&n);
    if(n<2){
        printf("No even numbers upto %d",n);
    }
    for(int i=2;i<=n;i+=2){
            
            product=product*i;
            
    } 
    printf("%d",product);
    return 0;
}