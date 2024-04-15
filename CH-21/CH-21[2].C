#include <stdio.h>

struct Employee
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

main()
{
    int n;

    printf("Enter the Employee number as per your choice : ");
    scanf("%d", &n);

    struct Employee e1[n];

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d : \n", i + 1);
        fflush(stdin);
        printf("Enter Employee id : ");
        scanf("%d", &e1[i].emp_id);
        fflush(stdin);
        printf("Enter Employee Name : ");
        scanf("%s", &e1[i].emp_name);
        printf("Enter Employee Age : ");
        scanf("%d", &e1[i].emp_age);
        printf("Enter Employee Role : ");
        scanf("%s", &e1[i].emp_role);
        printf("Enter Employee city : ");
        scanf("%s", &e1[i].emp_city);
        printf("Enter Employee experience : ");
        scanf("%s", &e1[i].emp_experience);
        printf("Enter Employee Company name : ");
        scanf("%s", &e1[i].emp_company_name);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        printf("Employee %d:\n", i + 1);
        printf("ID: %d\n", e1[i].emp_id);
        printf("Name: %s\n",e1[i].emp_name);
        printf("Age: %d\n", e1[i].emp_age);
        printf("Role: %s\n",e1[i].emp_role);
        printf("City: %s\n",e1[i].emp_city);
        printf("Experience: %d\n",e1[i].emp_experience);
        printf("Company Name: %s\n", e1[i].emp_company_name);
        printf("\n");
    }
}
