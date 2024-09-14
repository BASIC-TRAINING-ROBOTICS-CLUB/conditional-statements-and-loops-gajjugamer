/*logic is that we will take the number of terms value from usr and then check that its not zero by count variableand then wr will run for loop upto n entered numbers where the value of count will increment and n1 is sum of t1 and t2 and then t1 become t2 and t2 will become n1 and this series will go on untill n numbers*/


#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, n1, count = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    while (count < n) {
        printf("%d ", t1);

        n1 = t1 + t2;
        t1 = t2;
        t2 = n1;

        count++;
    }

    printf("\n");

    return 0;
}