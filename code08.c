//write a progam to write factorial of a number
#include<stdio.h>
int main(){
int n,i,fact;
fact =1;
printf ("enter n:");
scanf("%d",&n);

for(i=1;i<=n;i++){
fact = i*fact;


}
printf("fact of %d is %d\n", n,fact);
return 0;







}