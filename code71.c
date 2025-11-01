//write a program to accept 2 digit roll no from user and name of student and strore it in a file and display only name of student from file.
#include <stdio.h>
int main(){
    FILE *fp;
    int rollno;
    char name[100];
    fp=fopen("info.txt","w");
    if (fp==NULL) {
        printf("file not found\n");
    }
    else{
        printf("enter 2 digit noll no: ");
        scanf("%d",&rollno);
        printf("enter name of student:");
        scanf("%s",name);
        fprintf(fp,"%d %s\n",rollno,name);
        fclose(fp);
    }
    fp=fopen("info.txt","r");
    if (fp==NULL) {
        printf("file not found\n");
    }
    else{
        fseek(fp,3, SEEK_SET);
        fgets(name,sizeof(name), fp);
        printf("name of student: %s\n", name);
        fclose(fp);
    }
    return 0;

}