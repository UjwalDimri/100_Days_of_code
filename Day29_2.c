// 🔢
// Q58 (Arrays (1D))
// 📋
// Find the maximum and minimum element in an array.
// Show Sample Test Cases
// Input 1:
// 5
// 2 9 1 4 7
// Output 1:
// Max=9, Min=1
// Input 2:
// 3
// 10 10 10
// Output 2:
// Max=10, Min=10
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
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("Max=%d \t,\t",max);
    printf("Min=%d",min);

    return 0;
}