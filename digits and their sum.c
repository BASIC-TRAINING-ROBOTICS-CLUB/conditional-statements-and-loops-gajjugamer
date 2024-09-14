/*the logic is that we will take a value from user and then count its digit and store it in a variable and then we will take modulo of that number and store and then divide it by 10 and store and this will go on until it reaches 0 and then we will add all the stored variable and print the dum of it*/

#include <stdio.h>

int main() {
    int num, digit, count = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        count++;
        sum = sum + digit;
        num = num/10;
    }

    printf("Number of digits: %d\n", count);
    printf("Sum of digits: %d\n", sum);

    return 0;
}