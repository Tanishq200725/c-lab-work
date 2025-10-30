#include<stdio.h>
int main(){
int i,j,sum=0;
int arr[3][3]={{1,2,3}{4,5,6}{7,8,9}};
for(i=0;i<3;i++){
    for(i=0;i<3;i++){
        scanf("%d",&arr[i][j]);
    }
}
printf("the sum of diagonal matrix is :");
for(i=0;i<3;i++){
    if(i==j){
        sum=sum+i;
    }
    printf("%d",sum);
}
return 0;



}