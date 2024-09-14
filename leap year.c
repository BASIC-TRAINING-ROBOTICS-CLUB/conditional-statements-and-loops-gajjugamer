/*the logic is that we are taking yesr from user and first we are checking that the year is after 2000 or not and if yes then will run our condition to check that the year  dvided by 4 and modulo is zero and and year divided by 100 modulo is not zero or year divided by 400modulo is zero then it is a leap year else not else its not after 2000*/
#include <stdio.h>

int main() {
    int year;
    
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year > 2000) {
        
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            printf("The year %d is a leap year and is after 2000.\n", year);
        } else {
            printf("The year %d is not a leap year, but it is after 2000.\n", year);
        }
    } else {
        printf("The year %d is not after 2000.\n", year);
    }

    return 0;
}