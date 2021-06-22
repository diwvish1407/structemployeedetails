#include <stdio.h>

int i, j, n;

struct employee_details
{
    long int employee_id;
    char employee_name[40];
    int employee_age;
    long int employee_phone_no;
    float employee_salary;
};

int main()
{
    printf("Enter the no. of details, you want to add in record : ");
    scanf("%d", &n);

    struct employee_details ed[n];

    for (i = 0; i < n; i++)
    {
        printf("\nSr._No. %d\n", i + 1);

        printf("Enter employee ID : ");
        scanf("%lu", &ed[i].employee_id);

        printf("Enter employee name : ");
        scanf("%s", &ed[i].employee_name);

        printf("Enter employee age : ");
        scanf("%d", &ed[i].employee_age);

        printf("Enter employee phone number : ");
        scanf("%lu", &ed[i].employee_phone_no);

        printf("Enter employee salary : ");
        scanf("%f", &ed[i].employee_salary);
    }

    printf("\nDetails of the employees are:\n\n");
    printf("Sr._No.\tEmployee_Id\tEmployee_Name\tEmployee_Age\tEmployee_Phone_No.\tEmployee_Salary");

    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("%d\t", i + 1);
        printf("%lu\t", ed[i].employee_id);
        printf("%s\t", ed[i].employee_name);
        printf("%d\t", ed[i].employee_age);
        printf("%lu\t", ed[i].employee_phone_no);
        printf("%f\t", ed[i].employee_salary);
    }

    return 0;
}
