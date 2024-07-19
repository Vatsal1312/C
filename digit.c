#include <stdio.h>

// code for finding given character is a digit or not.

int main() {
    char ch;
    int digit;

    printf("Enter a character: ");
    scanf("%c", &ch);

    digit = (ch >= '0') && (ch <= '9');


    printf("The character is %s\n", digit ? "a digit" : "not a digit");
    
    return 0;
}