// 🔁
// Q40 (Loops without Arrays/Strings)
// 📋
// Write a program to find the 1’s complement of a binary number and print it.

// Show Sample Test Cases
// Input 1:
// 1010
// Output 1:
// 0101
// Input 2:
// 1111
// Output 2:
// 0000
#include <stdio.h>

int main() {
    long long num, rev = 0, ans = 0;
    int rem;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    // Reverse the number to process digits in correct order
    while (num > 0) {
        rem = num % 10;
        rem = (rem == 0) ? 1 : 0;  // flip 0->1 and 1->0
        rev = rev * 10 + rem;
        num /= 10;
    }

    // Reverse again to get the final 1's complement
    while (rev > 0) {
        ans = ans * 10 + (rev % 10);
        rev /= 10;
    }

    printf("1's Complement: %lld\n", ans);

    return 0;
}
