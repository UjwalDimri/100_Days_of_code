// 🔲
// Q73 (2D Arrays)
// 📋
// Find the sum of each row of a matrix and store it in an array.
// Show Sample Test Cases
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 6 15
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
    int sum=0,row_sum[row];
    for(int i=1;i<=row;i++){
        sum=0;
        for(int j=1;j<=col;j++){
            sum+=arr[i][j];
        }
        row_sum[i]=sum;
    }
    for(int i=1;i<=row;i++){
        printf("%d \n",row_sum[i]);
    }
    return 0;

}