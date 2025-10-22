// 🔢
// Q63 (Arrays (1D))
// 📋
// Merge two arrays.
// Show Sample Test Cases
// Input 1:
// 3
// 1 2 3
// 2
// 4 5
// Output 1:
// 1 2 3 4 5
#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a number of elements do you want to enter in first array  :");
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
       printf("Enter a Number :");
       scanf("%d",&arr1[i]);
    }
    printf("Enter a number of elements do you want to enter in second array  :");
    scanf("%d",&a);
    int arr2[a];
    for(int i=0;i<a;i++){
       printf("Enter a Number :");
       scanf("%d",&arr2[i]);
    }
    int c=n+a;
    int arr3[c];
    for(int i=0;i<n;i++){

        arr3[i]=arr1[i];
    }
    for(int i=0;i<a;i++){
        arr3[n+i]=arr2[i];
    }
    for(int i=0;i<c;i++){
     printf("%d \t",arr3[i]);
    }
}