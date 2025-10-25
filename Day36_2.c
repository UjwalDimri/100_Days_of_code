// 🔲
// Q72 (2D Arrays)
// 📋
// Find the sum of all elements in a matrix.
// Show Sample Test Cases
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 21
#include<stdio.h>
int main(){
    int row,col;
    printf("Enter row and column for matrix:\n");
    scanf("%d \t %d",&row,&col);

int arr[row][col];
   for(int i=1;i<=row;i++){
      for(int j=1;j<=col;j++){
        printf("Enter Element For %dX%d \t :",i,j);
        scanf("%d",&arr[i][j]);
      }
    }
    int sum=0;
      for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            sum=sum+arr[i][j];
      }
    }
    printf("The sum is : %d",sum);

return 0;    
}