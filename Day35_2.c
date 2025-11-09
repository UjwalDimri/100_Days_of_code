// 🔢
// Q70 (Arrays (1D))
// 📋
// Rotate an array to the right by k positions.
// Show Sample Test Cases
// Input 1:
// 5
// 1 2 3 4 5
// 2
// Output 1:
// 4 5 1 2 3
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int k;
    scanf("%d",&k);
    k = k % n;
    int temp[n];
    int index = 0;
    for(int i=n-k;i<n;i++)
        temp[index++] = arr[i];
    for(int i=0;i<n-k;i++)
        temp[index++] = arr[i];
    for(int i=0;i<n;i++)
        printf("%d ",temp[i]);
    return 0;
}

