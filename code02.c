#include<stdio.h>
int main(){
    int a,b,i;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    if(b>0)
    {
        for(i=a; i<=b; i++)
        {
            if(i % 2 != 0)   
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;   
}
