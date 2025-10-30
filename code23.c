// write a program to display all prime numbers between 1 to  20

#include<stdio.h>
int main()
{
int a,b,i,j;
a=2,b=20;
 
for(i=a;i<=b;i++)
{
for(j=2;j<i;j++)
{
    if (i%j==0)
    {
        printf("not prime\n");
    }
}
if(j==i)
{
    printf("%d\n",i);
}
    
}
return 0;


}

















