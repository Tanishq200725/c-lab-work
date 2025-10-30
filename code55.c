#include<stdio.h>
int main(){
int i,j;
int sum=0;
int mat[3][3];
printf("enter elements of matrix:");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
  printf("\nSum of each row:\n");
    for (i = 0; i < 3; i++) {
        int rowSum = 0;
        for (j = 0; j < 3; j++) {
            rowSum =rowSum+ mat[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
        sum=sum+ rowSum;
    }
    printf("\nSum of each column:\n");
    for (j = 0; j < 3; j++) {
        int clmnSum = 0;
        for (i = 0; i < 3; i++) {
            clmnSum =clmnSum+ mat[i][j];
        }
        printf("Column %d = %d\n", j + 1, clmnSum);
        sum=sum+clmnSum;
    }
    printf("Total sum of all elements = %d\n", sum);
return 0;




}