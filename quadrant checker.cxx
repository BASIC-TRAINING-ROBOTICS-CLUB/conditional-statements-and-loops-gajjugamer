/* logic is that this code will take value for x and y from us and then it will check particular conditions to determine the quadrant */

#include <stdio.h>

int main() {
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    if (x > 0) {
        if (y > 0) {
            printf("Quadrant I\n");
        } else {
            printf("Quadrant IV\n");
        }
    } else {
        if (y > 0) {
            printf("Quadrant II\n");
        } else {
            printf("Quadrant III\n");
        }
    }

    return 0;
}