//without argument and without return
#include <stdio.h>
void areaOfSquare() {
    int side, area;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    area = side * side;
    printf("The area of the square is: %d\n", area);
}
int main() {
    areaOfSquare();  
    return 0;
}
