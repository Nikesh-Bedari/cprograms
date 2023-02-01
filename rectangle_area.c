#include <stdio.h>

int rectangle_area(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d%d", &length, &breadth);
    int area = rectangle_area(length, breadth);
    printf("The area of the rectangle is: %d\n", area);
    return 0;
}
