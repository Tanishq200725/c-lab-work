//write a program to display number of space in a file
#include<Stdio.h>
int main(){
    FILE *fp;
    char ch;
    int spaceCount=0;
    fp=fopen("file65.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else{
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if((ch==" "))
            {
                spaceCount++;
                printf("then number of space in the file are %d",spaceCount);
            }
        }
        fclose(fp);
    }
    return 0;
}