#include <stdio.h>
int main() {
    char sentence[200];
    int length;
    printf("Enter a sentence or word: ");
    fgets(sentence, sizeof(sentence), stdin);
    length = strlen(sentence);
    if (sentence[length - 1] == '\n') {
        sentence[length - 1] = '\0';
        length--;
    }
    for (int i = 0; i < length / 2; i++) {
        if (sentence[i] != sentence[length - i - 1]) {
            printf("The string %s is NOT a palindrome.\n", sentence);
            return 0; 
    }
}
    printf("The string %s is a palindrome.\n", sentence);
    return 0;





}





