//write a program to count number of characters and numbe rof words in a file
#include,stdio.h>
int main(){
    FILE *fp;
    char ch;
    int charCount=0,wordCount=0;
    fp=fopen("file66.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            charCount++;
            if(ch==' ' || ch=='\n' || ch=='\t')
            {
                wordCount++;
                printf("ther number of characters : %d\n",charCount);
                printf("the number of words :%d",wordCount);
            }
        }
        fclose(fp);
    }
    return 0;
}