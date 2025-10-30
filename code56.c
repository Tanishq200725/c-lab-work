#include <stdio.h>
int main() {
    char str[200];
    int i = 0, j = 0, start = 0, lenMax = 0, start = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n')
         {
            j++;  
        } else {
            if (j > lenMax)
             {  
                lenMax = j;
                start = i - j; 
            }
            j = 0;  
        }
        i++;
    }
    if (j > lenMax)
     {
        lenMax= j;
        start = i - j;
    }

    printf("Longest word: ");
    for (i = start; i < start + lenMax; i++) {
        printf("%c", str[i]); 

    }
    printf("\nLength: %d\n", lenMax);
 return 0;





}
