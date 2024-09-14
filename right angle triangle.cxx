/*logic is that this code will take inputs from us for 3 sides and then it will apply pythagoras theorem to check that square of 2 sides are equal to hypotaneous or not*/

#include <stdio.h>

int main()
 {
    
    float a, b, c;
    printf("Enter the length of side a: ");
    scanf("%f", &a);
    printf("Enter the length of side b: ");
    scanf("%f", &b);
    printf("Enter the length of side c: ");
    scanf("%f", &c);

    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
     {
        printf("The triangle is right-angled.\n");
    } 
    else {
        printf("The triangle is not right-angled.\n");
    }

    return 0;
}