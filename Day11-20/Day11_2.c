// 🔀
// Q22 (Conditional Statements)
// 📋
// Write a program to find profit or loss percentage given cost price and selling price.

// Show Sample Test Cases
// Input 1:
// 1000 1200
// Output 1:
// Profit 20%
// Input 2:
// 1000 800
// Output 2:
// Loss 20%
// Input 3:
// 1000 1000
// Output 3:
// No Profit No Loss 
#include<stdio.h>
int main() {
    float a ,sp ,cp ,p,loss ;
    printf("Enter cost price and selling prince :");
    scanf("%f %f",&cp,&sp);
    a=sp-cp;
    if(a>0){
        p= (a/cp)*100;
        printf("Profit %f %%",p);

    } else if (a<0){
        loss= -(a/cp)*100;
        printf("Loss %f %%",loss);
    }else if(a==0){
        printf("No Profit No Loss");
    }
    return 0;
}
