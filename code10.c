//write a program to write table of a given number by user
#include<stdio.h>
int main(){
int n,i;
printf("enter n:");
scanf("%d",&n);
for(i=1;i<=10;i++){
n=n*i;
printf("%d*%d=%d\n",n,i,n*i);
}
return 0;




}