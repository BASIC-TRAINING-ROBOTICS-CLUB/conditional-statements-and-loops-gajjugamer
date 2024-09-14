/* the logic is tbag we will take any character from user in both lowercase or upper case and then we will compare it to every vowel . if its      a vowel thay done or else its not a vowel and reminder that a space before %c determines to neglact any whitespace before input chatracter*/
#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character '%c' is a vowel.\n", ch);
    } else {
        printf("The character '%c' is not a vowel.\n", ch);
    }

    return 0;
}