// 🔁
// Q27 (Loops without Arrays/Strings)
// 📋
// Write a program to print the sum of the first n odd numbers.

// Show Sample Test Cases
// Input 1:
// 3
// Output 1:
// 9
// Input 2:
// 5
// Output 2:
// 25 
#include<stdio.h>
int main() {
    int n , sum=0, count=0 ;int i=1;
    printf("Enter a number :");
    scanf("%d",&n);
    while(count<n){
        if(i%2!=0){ 
           sum=sum+i;
           count++;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}