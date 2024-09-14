/*logic is that we are using for loop to print table of 3 by changing te value of i by 1 to 10*/
#include <stdio.h>

int main() {
    int i;
    
    
    printf("table of 3:\n");
    for (i = 1; i <= 10; i++) {
      
        printf("3 * %d = %d\n", i,3 * i);
    }

    return 0;
}