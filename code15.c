//check wether the given number is armstrom or not
#include<stdio.h>
int main(){
int n,i,sum=0,rem,temp;
printf("enter n:");
scanf("%d",&n);
while(n>0){
rem=n%10;
sum=sum+(rem*rem*rem);
n=n/10;
}
printf("%d\n",sum);
if(sum==temp){
    printf("%d is armstrong number",sum);
}
else{
    printf("%d is not an armstrong number");
}
return 0;




}