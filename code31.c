#include<stdio.h>
int main(){
int i,j,n;
int arr[n];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<n;i++){
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
    printf("%d is min",arr[0]);
    printf("%d is max",arr[n-1]);
}
return 0;


}