// print stars pattern in right angle trianle but right angle to the right side

#include<stdio.h>
int main(){
    int n=4,i,j,space;
    for(i=1;i<=4;i++){
        for(space=1;space<=n-i;space++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        
    printf("\n");
}
return 0;




}