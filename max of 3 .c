/*the logic of this code is that we are taking 3 number from user and then we are comparin them with each otbet and we are using && condition it means if the both condition are true then we will get outhput neither it will forwarded to another condition*/

#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Find the maximum number
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }
    printf("The maximum number is: %d\n", max);

    return 0;
}