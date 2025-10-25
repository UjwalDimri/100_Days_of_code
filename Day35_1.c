// Day 35
// 🔢
// Q69 (Arrays (1D))
// 📋
// Find the second largest element in an array.
// Show Sample Test Cases
// Input 1:
// 5
// 10 20 30 40 50
// Output 1:
// 40
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of element do you want to enter :");
    scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    printf("Enter Element:");
    scanf("%d",&arr[i]);
}
int max = 0;
int sec_max=0;
for(int j=0;j<n;j++){
    if(arr[j]>max){
        sec_max=max;
        max=arr[j];
    }
    else if(arr[j] > sec_max && arr[j] < max){
            sec_max = arr[j]
    }
}
printf("%d",sec_max);
return 0;
}