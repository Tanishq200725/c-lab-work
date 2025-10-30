//remove duplicate elements from an array
#include<stdio.h>
int main(){
int i,j,n,k;
int arr[n];
printf("enter number of elements:");
scanf("%d",&n);
for(i=0;i<=n;i++){
    scanf("%d",&arr[n]);
}
for(i=0;i<=n;i++){
    for(j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            for(k=0;k<n-1;k++){
                arr[k]==arr[k+1];
            }
        }
        printf("Array after removing duplicate elements from array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    }
    
    
}
return 0;
}