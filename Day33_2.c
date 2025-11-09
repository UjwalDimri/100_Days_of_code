// 🔢
// Q66 (Arrays (1D))
// 📋
// Insert an element in a sorted array at the appropriate position.
// Show Sample Test Cases
// Input 1:
// 5
// 1 2 4 5 6
// 3
// Output 1:
// 1 2 3 4 5 6
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of element do you want to enter :");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
       printf("Enter a Number {in assending Order as a sorted array }:");
       scanf("%d",&arr[i]);
    }
    int a,x=n;
    printf("Enter the number which you want to insert:");
    scanf("%d",&a);
    for(int i=0;i<=n;i++){
        if(arr[i]>a){
            x=i;
            break;
        }
    }
    
    for(int i=n;i>x;i--){
            arr[i]=arr[i-1];
        }
    arr[x]=a;
     for(int i=0;i<=n;i++){
       printf("%d \t",arr[i]);
    }    
    }
    
