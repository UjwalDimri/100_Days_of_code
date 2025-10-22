// 🔢
// Q62 (Arrays (1D))
// 📋
// Reverse an array without taking extra space.
// Show Sample Test Cases
// Input 1:
// 4
// 1 2 3 4
// Output 1:
// 4 3 2 1
#include<stdio.h>
int main(){
     int n;
    printf("Enter a number of elements do you want to enter  :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       printf("Enter a Number :");
       scanf("%d",&arr[i]);
    }
     printf("Original Array ");
    for(int j=0;j<n;j++){
       printf("%d \t",arr[j]);
    }
    
     printf("\nReversed Array \n");
    for(int j=n-1;j>=0;j--){
       printf("%d \t",arr[j]);
    }
    return 0;
}