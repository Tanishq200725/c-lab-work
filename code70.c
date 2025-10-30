//write a program to copy the content of one file to another file and also find the size of the file.
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char txt1[200]; 
    int size;
    fp=fopen("txt1.txt","w");
    if (fp==NULL) {
        printf("file not found\n");
    }
    fprintf(fp,"Hello, my name is Tanishq Tyagi");
    fclose(fp);
    fp=fopen("txt1.txt","r");
    if (fp==NULL) {
        printf("file not found\n");
        return 1;
    }
    fgets(txt1,sizeof(txt1),fp);  
    fclose(fp);
    size=strlen(txt1);
    FILE *fp1;
    fp1=fopen("txt2.txt","w");
    if (fp1==NULL) {
        printf("file not found\n");
    }
    fprintf(fp1, "%s\n", txt1);
    fclose(fp1);
    return 0;
}
