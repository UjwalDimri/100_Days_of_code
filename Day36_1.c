// 🔲
// Q71 (2D Arrays)
// 📋
// Read and print a matrix.
// Show Sample Test Cases
// Input 1:
// 2 2
// 1 2
// 3 4
// Output 1:
// 1 2
// 3 4
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
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
        
    }
return 0;
}