// with argument without return 
#include <stdio.h>
void calculateAverage(int n1, int n2, int n3, int n4, int n5) {
    float avg;
    avg = (n1 + n2 + n3 + n4 + n5) / 5.0; 
    printf("The average of 5 numbers is: %f\n", avg);
}
int main() {
    int a, b, c, d, e;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    calculateAverage(a, b, c, d, e); 
    return 0;
}
