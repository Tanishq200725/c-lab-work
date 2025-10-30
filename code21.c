// write a program to accept 2 numbers from user and display square of even and cube of odd

#include<stdio.h>
int main()
{
int a,b,i;
printf("enter a,b:");
scanf("%d %d",&a,&b);
for(i=a;i<=b;i++)
{
    if(i%2==0)
    {
        printf("%d\n",i*i);
    }
    else{
        printf("%d\n",i*i*i);
    }
}

return 0;





}