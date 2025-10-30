#include<stdio.h>
int main(){
int i,j,n;
int arr[5];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    scanf("%d",arr[n]);
}
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(arr[i]<arr[j])
        {
            printf("%d\n",arr[i]);
        }
    }
}
return 0;


}