//write a program to find transpose of a given matrix
#include<stdio.h>
int main(){
int i,j,n;
printf("enter rows and columns:");
scanf("%d%d",&i,&j);
int arr[i][j];
printf("enter elements of array:");
scanf("%d",&n);
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
    }
}
 for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            arr[j][i] = arr[i][j];
        }
    }
 printf("\nTranspose of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

return 0;


}