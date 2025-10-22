// 🔢
// Q57 (Arrays (1D))
// 📋
// Find the sum of array elements.
// Show Sample Test Cases
// Input 1:
// 4
// 2 4 6 8
// Output 1:
// 20
// Input 2:
// 3
// 1 1 1
// Output 2:
// 3
#include<stdio.h>
int main(){
    int n;int sum=0;
    printf("Enter the number of element you want to enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter a element :");
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
        sum=arr[j]+sum;
    }
    printf("%d",sum);

    return 0;
}