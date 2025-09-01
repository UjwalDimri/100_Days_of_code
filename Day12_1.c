// 🔀
// Q23 (Conditional Statements)
// 📋
// Write a program to calculate a library fine based on late days.

// Show Sample Test Cases
// Input 1:
// 4 
// Output 1:
// Fine ₹8 2rupee per day
// Input 2:
// 8
// Output 2:
// Fine ₹32 rs6 after after four days 
// Input 3:
// 15  8.2 after 8 days
// Output 3:
// Fine ₹90
// Input 4:
// 31 // after 30 days membership cancelled
// Output 4:
// Membership Cancelled 
#include<stdio.h>
int main(){
    int l_days; int bill;// late days 
    printf("Enter Late Days :");
    scanf("%d",&l_days);
    if (l_days<=4){
        bill= l_days*2;
        printf("Fine ₹%d",bill);
    } else if ((l_days>4)&&(l_days<=8)){ 
        l_days-=4;
        bill=l_days*6+8;
        printf("Fine ₹%d",bill);
    } else if((l_days>8)){
        l_days-=8;
        float _bill;
        bill= l_days*8.3+32;
        printf("Fine ₹%d",bill);
    }
    return 0;

}