/*loic is that we will take n from user and we will run fro loop utill i and with every case we will check that n modulo i is zero or not, if its zero then it will print i */

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Divisors of %d are: ", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    

    return 0;
}