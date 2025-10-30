//write a program to display contents of a file line by line
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("file64.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else
{
    ch=fgetc(fp);
        while(ch!=EOF)
        {
            printf("%c",ch);
        }
        fclose(fp);
}
return 0;
}
