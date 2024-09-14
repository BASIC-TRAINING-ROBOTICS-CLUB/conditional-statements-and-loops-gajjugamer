//logic is that this code will check that values of all sides are same or not
#include <stdio.h>

int main() {
    
    int a, b, c;
    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);

    
    if (a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else {
        printf("The triangle is not equilateral.\n");
    }

    return 0;
}
