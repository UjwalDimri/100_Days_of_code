// 🔲
// Q74 (2D Arrays)
// 📋
// Find the transpose of a matrix.
// Show Sample Test Cases
// Input 1:
// 2 3
// 1 2 3
// 4 5 6
// Output 1:
// 1 4
// 2 5
// 3 6
#include<stdio.h>
int main(){ 
    int row,col;
    printf("Enter row and column for matrix:\n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}
