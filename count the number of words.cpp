#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 1;  

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            count++;
        }
    }

    printf("Number of words in the sentence: %d\n", count);

    return 0;
}
