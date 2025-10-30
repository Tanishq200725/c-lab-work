#include <stdio.h>
int main() {
    char str[200];
    int i, count = 0;
    int foundWord = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && foundWord == 0) {
            foundWord = 1;
            count++;
        } else if (str[i] == ' ' || str[i] == '\n') {
            foundWord = 0;
        }
    }

    printf("Number of words: %d\n", count);

    return 0;





}
