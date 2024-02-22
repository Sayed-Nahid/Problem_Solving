#include<stdio.h>
int main()
{
    int number, work_hour;
    float  per_hour_salary, salary;
    scanf("%d", &number);
    scanf("%d", &work_hour);
    scanf("%f", &per_hour_salary);
    printf("NUMBER = %d\n", number);
    salary = work_hour * per_hour_salary;
    printf("SALARY = U$ %0.2f\n", salary);
    return 0;
}
