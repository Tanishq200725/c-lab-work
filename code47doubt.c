//write a program to display matrix multiplication

#include<stdio.h>
int main(){
int i,j,n;
printf("enter number of rows and clmns:");
scanf("%d",&n);
int arr1[n][n],arr2[n][n],arrayProduct[n][n];
printf("for arr1");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr1[n][n]);
    }
}
printf("for arr2");
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr2[n][n]);
    }
}
for(i=0;i<n;i++){
    arrayProduct[n][n]=arr1[n][n]*arr2[n][n];
}


}