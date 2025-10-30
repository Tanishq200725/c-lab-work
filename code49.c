// with argument and with return
#include <stdio.h>
int checkEvenOdd(int num) {
    if (num % 2 == 0)
        return 1;   
    else
        return 0;   
}
int main() {
    int n, result;
    printf("Enter a number: ");
    scanf("%d", &n);
    result = checkEvenOdd(n); 
    if (result == 1)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);

    return 0;
}
