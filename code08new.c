// now in while loop of code08
#include<stdio.h>
int main(){
int n,i,fact;
fact =1;
printf ("enter n:");
scanf("%d",&n);
i = 1;
while(i<=n){
fact = i*fact;
i++;

}
printf("fact of %d is %d\n", n,fact);
return 0;







}