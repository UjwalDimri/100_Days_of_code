// 🔢
// Q67 (Arrays (1D))
// 📋
// Insert an element in an array at a given position.
// Show Sample Test Cases
// Input 1:
// 4
// 10 20 30 40
// 2 15
// Output 1:
// 10 20 15 30 40 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of element do you want to enter :");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
       printf("Enter a Number :");
       scanf("%d",&arr[i]);
    }
    int index,num;
    printf("Enter the index and the number which you want to insert:");
    scanf("%d %d",&index,&num);
    for(int i=n;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=num;
    n++;
    for(int i=0;i<n;i++){
       printf("%d \t",arr[i]);
    }    
    return 0;
}
