#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student {
        char name[100];
        int marks;
    };
    struct student s[n];
    for (i = 0; i < n; i++) {
        printf("Enter the name and marks of student %d: ", i + 1);
        scanf("%s%d", s[i].name, &s[i].marks);
    }
    FILE *fp;
    fp = fopen("students.txt", "w");
    for (i = 0; i < n; i++) {
        fprintf(fp, "Name: %s\tMarks: %d\n", s[i].name, s[i].marks);
    }
    fclose(fp);
    printf("Data saved successfully!\n");
    return 0;
}
