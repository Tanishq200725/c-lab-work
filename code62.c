//write a program to open a file and check wether file is empty or contain some text
#include<stdio.h>
int main(){
    char ch;
    FILE *fp;
    fp=fopen("file62.txt","r");
    if(fp==NULL)
    {
        printf("file not found\n");
    }
    else{
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if(ch==EOF)
            {
                printf("file is empty\n");
            }
            else
            {
                printf("file contains something\n");
            }
        }
    fclose(fp);

    }
    return 0;
}
