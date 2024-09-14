
/*the logic is that we will take n number from user and then we wl run for loop and it will increment the value of i by one untill and multiply it by numbe*/
#include <stdio.h>

int main() {
    int n, factorial = 1, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: ", n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%d\n", factorial);

    return 0;
}