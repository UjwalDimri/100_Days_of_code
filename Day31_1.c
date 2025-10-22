// 🔢
// Q61 (Arrays (1D))
// 📋
// Search for an element in an array using linear search.
// Show Sample Test Cases
// Input 1:
// 5
// 1 2 3 4 5
// 3
// Output 1:
// Found at index 2
// Input 2:
// 4
// 10 20 30 40
// 25
// Output 2:
// -1
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
    int a;
    printf("Enter a number do you want to serach in the array:");
    scanf("%d",&a);
    for(int j=0;j<n;j++){
        if(arr[j]==a){
            printf("Found at Index %d",j);
        }
      
        
    }
    return 0;
}