#include <stdio.h>
int computeSum(int a, int b)
{
    return a + b;
}
void checkNumber(int num)
{
    if (num % 2 == 0)
        printf("The sum %d is Even.\n", num);
    else
        printf("The sum %d is Odd.\n", num);
}

int main()
{
    int num1, num2, result;
    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);
    result = computeSum(num1, num2);

    checkNumber(result);

    return 0;
}
