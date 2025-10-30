#include<stdio.h>
int main(){
int i,j,n,diff=0;
int arr[n];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    scanf("%d",&arr[n]);
}
for(j=0;j<=i;j++){
if(arr[i]<arr[j])
        {
            printf("%d\n",arr[i]);
        }
        diff=arr[n-1]-arr[0];
}
printf("%d is the difference",diff);
return 0;
}