// write program to find the sum of lower triangle of matrix

#include<stdio.h>
int main(){
int i,j,n,sum=0;
printf("enter elements of rows and clmns array:");
scanf("%d%d",&i,&j);
int arr[3][3];
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[n][n]);
    }
}
 for(i = 0; i < 3; i++) {
        for(j = 0; j <= i; j++) { 
            sum = sum + arr[i][j];
        }
    }

    printf("Sum of lower triangular elements = %d\n", sum);

    return 0;
}






