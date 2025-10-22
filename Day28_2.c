// 🔢
// Q56 (Arrays (1D))
// 📋
// Read and print elements of a one-dimensional array.
// Show Sample Test Cases
// Input 1:
// 3
// 10 20 30
// Output 1:
// 10 20 30
// Input 2:
// 5
// 1 2 3 4 5
// Output 2:
// 1 2 3 4 5
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of elements do ypu want to enter  :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       printf("Enter a Number :");
       scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){
        printf("%d \t",arr[j]);
    }
    
}