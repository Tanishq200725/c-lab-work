#include<stdio.h>
int main(){
int i,j,n,,num1,num2,diff,sum=0,minSum;
int arr[n];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
    scanf("%d",&arr[n]);
}
for(j=0;j<=i;j++){
 for(int i = 0; i < n - 1; i++) {
        for( j = i + 1; j < n; j++) {
             sum = arr[i] + arr[j];
 if((sum) <(minSum)) {
                minSum = sum;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

}
    printf("The pair whose sum is closest to 0 is (%d, %d)\n", num1, num2);

    return 0;
}