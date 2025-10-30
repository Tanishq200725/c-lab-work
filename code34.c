#include<stdio.h>
int main(){
int i,j,n,evenSum=0,oddSum=0;
int arr[n];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[n]);
}
for(j=0;j<=i;j++){
    if(arr[j]%2==0){
        evenSum=evenSum+arr[i];
    }
    else{
        oddSum=oddSum+arr[i];
}
 printf("Sum of even numbers = %d\n", evenSum);
    printf("Sum of odd numbers = %d\n", oddSum);

}
return 0;
}