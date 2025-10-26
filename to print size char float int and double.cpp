#include <stdio.h>

int main() {
    char temp;
    printf("Enter any character: ");
    scanf("%c", &temp);

    printf("Size of char   : %zu bytes\n", sizeof(char));
    printf("Size of int    : %zu bytes\n", sizeof(int));
    printf("Size of float  : %zu bytes\n", sizeof(float));
    printf("Size of double : %zu bytes\n", sizeof(double));

    return 0;
}
