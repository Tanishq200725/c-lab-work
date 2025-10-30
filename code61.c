#include <stdio.h>
struct Worker {
    char name[50];
    float salary;
    float overtime;
};
int main() {
    struct Worker w1, w2;
    float totalPayment1, totalPayment2, grandTotal;
    printf("Enter name of first worker: ");
    fgets(w1.name, sizeof(w1.name), stdin);
    printf("Enter first worker Salary: ");
    scanf("%f", &w1.salary);
    printf("Enter first worker  Overtime: ");
    scanf("%f", &w1.overtime);
    getchar();
    printf("Enter second worker Name: ");
    fgets(w2.name, sizeof(w2.name), stdin);
    printf("Enter second worker Salary: ");
    scanf("%f", &w2.salary);
    printf("Enter second worker Overtime: ");
    scanf("%f", &w2.overtime);
    totalPayment1 = w1.salary + w1.overtime;
    totalPayment2 = w2.salary + w2.overtime;
    grandTotal = totalPayment1 + totalPayment2;
    printf(" Worker's final salary\n");
    printf("Worker 1: Name=%sTotal Payment = %f\n", w1.name, totalPayment1);
    printf("Worker 2: Name=%sTotal Payment = %f\n", w2.name, totalPayment2);
    printf("Grand Total Payment of Both Workers = %.2f\n", grandTotal);
    return 0;




}
