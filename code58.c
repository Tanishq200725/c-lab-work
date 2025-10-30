#include<stdio.h>
int countWords(){
    int count=0;
int found=0;
}
 for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            if (inWord == 0) {
                count++;      // new word found
                inWord = 1;   // mark as inside a word
            }
        } else {
            inWord = 0;       // left the word
        }
        return count;
    }



int main() {
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int totalWords = countWords();  // call function
    printf("Number of words: %d\n", totalWords);

    return 0;


}