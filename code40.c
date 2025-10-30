#include<stdio.h>
int main(){
    char str[5];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {  
            count++;
        }
        printf("Number of 'a' in the string: %d\n", count);
    }



return 0;
    }




