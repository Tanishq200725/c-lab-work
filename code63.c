//write a program to read the contents of a file and display it in proper format
#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("file63.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if(ch=='\n')
            {
                printf("\n");
            }
            else
            {
                printf("%c",ch);
            }
        }
        fclose(fp);
    }
    return 0;

}