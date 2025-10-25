// 🔀
// Q24 (Conditional Statements)
// 📋
// Write a program to calculate an electricity bill based on units consumed.

// Show Sample Test Cases
// Input 1:
// 50
// Output 1:
// Bill: ₹250 
// Input 2:
// 150
// Output 2:
// Bill: ₹950 
// Input 3:
// 250
// Output 3:
// Bill: ₹2200 
#include<stdio.h>
int main(){
int units ; int bill;
printf("Enter the number of units you consumed : ");
scanf("%d",&units);
    if(units<=50){ 
        bill=units*5;
        printf("Your bill is : %d",bill);
    }else if((units>50)&&(units<=150)){
        int _units;
        _units=units-50;
        bill=_units*7+250;
        printf("Your bill is : %d",bill);
    }else if ((units>150)&&(units<=250)){
        int units_1 =0;
        units_1=units-150;
        float _bill=units_1*12.5+700+250;
        printf("Your bill is : %f",_bill);
    }else if(units>250){
        int _units;
        _units=units-250;
        bill=_units*10 +700+250;
        printf("Your bill is : %d",bill);
    } else {
        printf(" IVALID INPUT ENTER A POSITIVE INTEGER ");
    }
    
    return 0;

}