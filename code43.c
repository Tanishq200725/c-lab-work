// write a program to find the product and sum of elements of anti diagonal matrix
#include<stdio.h>
int main(){
int i,j,n;
int sum=0,product=1;
printf("enter number of rows and columns:");
scanf("%d%d",&n,&n);
int arr[n][n];
printf("enter elements of matrix:");
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[n][n]);
    }
}
for(i=0;i<n;i++)
{
    int element = arr[i][n - i - 1];
        printf("%d ", element);
        sum=sum+i;
        product=product*i;
}
printf("%d is the sum of anti diagonal elements:",sum);
printf("%d is the product of anti diagonalelements:",product);
return 0;

} 