#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int sum = *ptr1 + *ptr2;
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}
