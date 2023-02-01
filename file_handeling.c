#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[50];
    float salary;
    FILE *fp;

    fp = fopen("employee.txt", "a");
    if (fp == NULL) {
        printf("File could not be opened");
        exit(1);
    }

    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee salary: ");
    scanf("%f", &salary);

    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee salary: ");
    scanf("%f", &salary);

    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Salary: %.2f\n", salary);

    fclose(fp);
    printf("Data saved successfully\n");

    return 0;
}
