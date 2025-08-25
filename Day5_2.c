// 🖥️
// Q10 (User Inputs, Operations & Output)
// 📋
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

// Show Sample Test Cases
// Input 1:
// 3661
// Output 1:
// 1:1:1
// Input 2:
// 7322
// Output 2:
// 2:2:2

#include<stdio.h>
int main(){
    int sec;
    printf("Enter Time in Seconds :");
    scanf("%d",&sec);

    int hour ; int min ;
    hour = sec/3600;
    sec=sec%3600;
    min = sec/60;
    sec=sec%60;
    printf("%d : %d : %d",hour,min,sec);
    return 0;
}