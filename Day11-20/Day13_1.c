// 🔀
// Q25 (Conditional Statements)
// 📋
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// Show Sample Test Cases
// Input 1:
// 4 2 +
// Output 1:
// 6 
// Input 2:
// 10 3 %
// Output 2:
// 1
// Input 3:
// 15 5 /
// Output 3:
// 3
#include<stdio.h>
 int main(){
    int a ; int b ; char x; int y; 
    printf("Enter any two number and operator  :");
    scanf("%d %d %c",&a,&b,&x);
    switch (x) {
        case '+':
              y=a+b;
              printf("%d",y);
              break;
        case '-' :
              y=a-b;
              printf("%d",y);
              break;
        case '*' :
              y=a*b;
              printf("%d",y);
              break;
        case '/' :

              y=a/b;
              printf("%d",y);
              break;
        case '%' :
              y=a%b;
              printf("%d",y);
              break;
        default :
              printf("INVALID INPUT");          

    }
    
    return 0;
 }
