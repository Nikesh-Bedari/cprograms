#include<stdio.h>
// #include<stdlib.h>
//#include<conio.h>

struct student{
    int roll;
    char name[20];
    int age;
    char address[20];
    int marks;
} s[15];

int main() {
    // clrscr();
    int i;
    printf("Enter information of students: \n\n");


    for (i=0; i<15; i++){

        printf("Enter Roll Number: \n");
        scanf("%d", &s[i].roll);

        printf("Enter Student Name: \n");
        scanf("%s", s[i].name);

        printf("Enter Student Address: \n");
        scanf("%s", s[i].address);

        printf("Enter Student Marks: \n");
        scanf("%d", &s[i].marks);
    }
    printf("Displaying Students Information: \n\n");
    
    for (i=0; i<15; i++){
        printf("\nStudent Roll: %d\n", s[i].roll);
        printf("Student Name: ");
        puts(s[i].name);
        printf("Student Address: ");
        puts(s[i].address);
        printf("Student Marks: %d", s[i].marks);
        printf("\n");
    }
    return 0;
    // getch();

}
