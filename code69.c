//write a program to count how many times program is executed
#include<stdio.h>
int main(){
    FILE *fp;
    int count=0;
    fp=fopen("file69.txt","r");
    if(fp==NULL)
    {
        fp=fopen("file69.txt","w");
        fprintf(fp,"%d",1);
        printf("This is the first execution of the program.\n");
    }
    else
    {
        fscanf(fp,"%d",&count);
        count++;
        fclose(fp);
        fp=fopen("file69.txt","w");
        fprintf(fp,"%d",count);
        printf("The program has been executed %d times.\n",count);
    }
    fclose(fp);
    printf("the number of executions is %d",count)
    return 0;
}