//write a program to find sum of  elements of upper triangle of 3x3 matrix
#include<stdio.h>
int main(){
int i,j,sum=0;
printf("enter elements of rows and clmns:");
scanf("%d%d",&i,&j);
int arr[3][3];
for(i = 0; i < 3; i++) {
        for(j = i; j < 3; j++) { 
            sum += arr[i][j];
        }
    }

    printf("Sum of upper triangular elements = %d\n", sum);

    return 0;
}