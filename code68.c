//write a program to find the longest word in file
#include<stdio.h>
int main(){
    FILE *fp;
    char ch,word[100],longestWord[100];
    int i=0,maxLength=0,length=0;
    fp=fopen("file68.txt","r");
    if(fp==NULL)
    {
        printf("file not found\n");
    }
    else
    {
        ch=fgetc(fp);
        while(ch!=EOF)
        {
            if(ch!=' ' && ch!='\n')
            {
                word[i]=ch;
                i++;
                length++;
            }
            else
            {
                word[i]='\0';
                if(length>maxLength){
                    maxLength=length;
                    strcpy(longestWord,word);
                }
            }
            ch=fgetc(fp);
        }
        word[i]='\0';
        if(length>maxLength)
        {
            strcpy(longestWord,word);
        }
        printf("The longest word is:%s",longestWord);
        fclose(fp);
    }
    return 0;
}