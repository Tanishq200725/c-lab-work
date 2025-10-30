//write a program to display sum of two arrays

#include<stdio.h>
int main(){
int i,j,arrSum[i],n;
int arr1[n],arr2[n];
printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < n; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
    printf("Sum of two arrays:\n");
    for(i = 0; i < n; i++) {
        printf("%d ",arrSum[i]);
    }
    printf("\n");

    return 0;







}