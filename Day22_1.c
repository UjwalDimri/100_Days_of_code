
// Q43 (Loops without Arrays/Strings)
// 📋
// Write a program to check if a number is a strong number.

// Show Sample Test Cases
// Input 1:
// 145
// Output 1:
// Strong number
// Input 2:
// 123
// Output 2:
// Not strong number 
#include<stdio.h>
int main(){
    int n ,fact=1,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    int temp=n;
    while (n!=0){
        int x=n%10;
        for(int i=1;i<=x;i++){
            fact=fact*i;

        }
        sum=sum+fact;
        fact =1;
        n=n/10;
    }
    if(sum==temp){
        printf("Strong Number ");
    }else {
        printf("Not a strong number ");
    }
}
