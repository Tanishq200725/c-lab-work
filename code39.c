#include<stdio.h>
int main(){
int i,n,j,num1,num2,num3,sum=0;
int arr[10];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<=10;i++)
{
    scanf("%d",&arr[i]);
}
for(j=0;j<=i;j++)
{
     if(arr[i] > num1) 
     {
            num3=num2;
            num2 = num1;
            num1= arr[i];
        }
        else if(arr[i] > num2) 
        {
            num3=num2;
            num2= arr[i];
        }
        else if(arr[i] >num3) 
        {
            num3 = arr[i];  
         }
        }
        printf("The three numbers with maximum sum are: %d, %d, %d\n", num1, num2, num3);
        printf("Their sum is: %d\n", num1 +num2+ num3);
return 0;




}