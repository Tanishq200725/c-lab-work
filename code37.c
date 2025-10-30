#include<stdio.h>
int main(){
int i,j,n;
int arr[n];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    scanf("%d",&arr[n]);
}
for(j=0;j<=i;j++){
if(arr[i]==arr[j]){
    printf("%d",arr[i]);
    printf("arrays are equal");
}
else{
    printf("arrays are not equal");
}
}
return 0;
}