#include <stdio.h>

struct student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

void main()
{
    int n;

    printf("Enter the student number as per your choice : ");
    scanf("%d", &n);

    struct student s1[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d : \n", i + 1);
        printf("Enter Student id : ");
        scanf("%d", &s1[i].stu_id);
        fflush(stdin);
        printf("Enter Student Name : ");
        scanf("%s", &s1[i].stu_name);
        printf("Enter Student Age : ");
        scanf("%d", &s1[i].stu_age);
        printf("Enter Student Course : ");
        scanf("%s", &s1[i].stu_course);
        printf("Enter Student city : ");
        scanf("%s", &s1[i].stu_city);
        printf("Enter Student Standard : ");
        scanf("%s", &s1[i].stu_standard);
        printf("Enter Student School : ");
        scanf("%s", &s1[i].stu_school);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Student %d:\n", i + 1);
        printf("ID: %d\n", s1[i].stu_id);
        printf("Name: %s\n", s1[i].stu_name);
        printf("Age: %d\n", s1[i].stu_age);
        printf("Course: %s\n", s1[i].stu_course);
        printf("City: %s\n", s1[i].stu_city);
        printf("Standard: %d\n", s1[i].stu_standard);
        printf("School: %s\n", s1[i].stu_school);
        printf("\n");
    }
}
