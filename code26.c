#include<stdio.h>
int main(){
int n,i;
printf("enter number of elements :");
scanf("%d",&n);
int num[n];
printf(" enter number:");
for(i=0;i<n;i++)
{
    scanf("%d",&num[i]);
}
printf("elements in reverse order:\n");
    for(i =n-1 ; i >= 0; i--)
     {
        printf("%d ", num[i]);
    }



return 0;




}