#include <stdio.h>

int main() {
    char str[200];
    int i, countAlpha = 0, countDigits = 0, countSpecial = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            countAlpha++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            countDigits++;
        } else if (str[i] != ' ' && str[i] != '\n') {
            countSpecial++;
        }
    }
    printf("Alphabets: %d\n", countAlpha);
    printf("Digits: %d\n", countDigits);
    printf("Special characters: %d\n", countSpecial);

    return 0;





}
