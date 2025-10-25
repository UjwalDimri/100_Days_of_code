// 🔁
// Q41 (Loops without Arrays/Strings)
// 📋
// Write a program to swap the first and last digit of a number.

// Show Sample Test Cases
// Input 1:
// 1234
// Output 1:
// 4231
// Input 2:
// 1001
// Output 2:
// 1001 
#include <math.h>

int main() 
{
    int num, first, last, digits, pow10, middle, swapped;

    // Input number
    printf("Enter a number: ");
    scanf("%d",&num);

    // If single-digit, swapping doesn't change anything
    if (num < 10) 
    {
        printf("Swapped Number: %d\n",num);
        return 0;
    }

    digits = (int)log10(num);      // total digits - 1
    pow10 = (int)pow(10, digits);  // 10^(digits)

    first = num / pow10;           // first digit
    last = num % 10;               // last digit
    middle = (num % pow10) / 10;   // remove first and last

    swapped = last*pow10 + middle*10 + first ;

    printf("Swapped Number: %d\n",swapped);

    return 0;
}
