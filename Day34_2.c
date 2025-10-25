// 🔢
// Q68 (Arrays (1D))
// 📋
// Delete an element from an array.
// Show Sample Test Cases
// Input 1:
// 5
// 1 2 3 4 5
// 2
// Output 1:
// 1 2 4 5
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of element do you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    int del;
    printf("Enter the index which do want to remove :");
    scanf("%d",&del);
    for(int i=del;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
