#include <stdio.h>

int main() {
    float basic_salary, hra, da, ta, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter HRA percentage (e.g. 10 for 10%): ");
    scanf("%f", &hra);
    hra = (basic_salary * hra) / 100;

    printf("Enter DA percentage (e.g. 15 for 15%): ");
    scanf("%f", &da);
    da = (basic_salary * da) / 100;

    printf("Enter TA amount: ");
    scanf("%f", &ta);

    gross_salary = basic_salary + hra + da + ta;

    printf("Gross salary: Rs. %.2f\n", gross_salary);

    return 0;
}