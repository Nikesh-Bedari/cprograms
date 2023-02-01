#include <stdio.h>
#define NUM_STUDENTS 20

struct student {
    char name[100];
    int marks;
};

int main() {
    struct student s[NUM_STUDENTS];
    int i;
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter the name and marks of student %d: ", i + 1);
        scanf("%s%d", s[i].name, &s[i].marks);
    }
    printf("\n");
    printf("Name\tMarks\n");
    printf("----\t-----\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%s\t%d\n", s[i].name, s[i].marks);
    }
    return 0;
}
