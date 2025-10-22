// 🔄
// Q55 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print all the prime numbers from 1 to n.
// Show Sample Test Cases
// Input 1:
// 10
// Output 1:
// 2 3 5 7
// Input 2:
// 20
// Output 2:
// 2 3 5 7 11 13 17 
#include<stdio.h>
int main(){
    int n,count=0 ;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count++;
            } 
        }
         if (count<=2){
            printf("%d \t",i);

        }
        count=0;

    }

}