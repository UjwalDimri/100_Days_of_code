// 🔁
// Q39 (Loops without Arrays/Strings)
// 📋
// Write a program to find the product of odd digits of a number.

// Show Sample Test Cases
// Input 1:
// 12345
// Output 1:
// 15 (1*3*5)
// Input 2:
// 2468
// Output 2:
// 1 (no odd digits, assume 1)
#include<stdio.h>
int main(){
    int n ,product =1,rem;
    printf("Enter any number :");
    scanf("%d",&n);
    while (n!=0){
        rem=n%10;
        if(rem%2!=0){
            product=rem*product;
        }
        n=n/10;

    }
    
    if ((n=0)&&(product)){
        printf("%d no odd digits, assume 1",product); 
    }
}
