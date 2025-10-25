// 🔁
// Q38 (Loops without Arrays/Strings)
// 📋
// Write a program to find the sum of digits of a number.

// Show Sample Test Cases
// Input 1:
// 123
// Output 1:
// 6
// Input 2:
// 999
// Output 2:
// 27
#include<stdio.h>
int main(){
    int n ,rem ,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    
   while(n!=0){
    rem=n%10;
    sum+=rem;
    n=n/10;
   }
   printf("%d",sum);
   return 0;
    

}
