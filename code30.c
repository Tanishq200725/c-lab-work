#include<stdio.h>
int main(){
int i,n,j,k;
int arr[5];
printf("Enter %d elements:\n", n);
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
}
for(i=0;i<n;i++)
{
    for(j= 0;j<n;j++)
    {
        if (arr[i]!=arr[j])
        {
            printf("%d\n",arr[i]);
        }
    }
}
return 0;
}