// write a program to accept a number from user and check wether the number is present in fabonnaci series or not
//for 13 numbers
#include<stdio.h>
int main() {
    int i, a = 0, b = 1, c, n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n == 0 || n == 1)
    {
        printf("%d is in Fibonacci series\n", n);
    }
    for(i = 3; i <= 13; i++)
    {
        c = a + b;
        if(c == n) {
            printf("%d is in Fibonacci series\n", n);
        }
        a = b;
        b = c;
        }
    printf("%d is NOT in Fibonacci series\n", n);
    return 0;
}
