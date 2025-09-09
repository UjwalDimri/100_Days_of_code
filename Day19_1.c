// 🔁
// Q37 (Loops without Arrays/Strings)
// 📋
// Write a program to find the LCM of two numbers.

// Show Sample Test Cases
// Input 1:
// 4 5
// Output 1:
// 20
// Input 2:
// 7 3
// Output 2:
// 21 


#include <stdio.h>

int main() {

    int n1, n2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    
    max = (n1 > n2) ? n1 : n2;

    lcm = max;

    while ((lcm % n1 != 0) || (lcm % n2 != 0)) {
        lcm += max;
    }

    printf("The LCM of %d and %d is %d.", n1, n2, lcm);

    return 0;
}

    
