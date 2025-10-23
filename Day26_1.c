// 🔄
// Q51 (Nested Loops without Arrays/Strings)
// 📋
// Write a program to print the following pattern:
//     5
//    45
//   345
//  2345
// 12345
#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=5-i+1;k<=5;k++){
            printf("%d",k);
        }
       printf("\n");
    }
 
    return 0;
}