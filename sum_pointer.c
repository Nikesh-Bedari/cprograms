#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("The sum of the numbers is: %d\n", sum);
    return 0;
}
