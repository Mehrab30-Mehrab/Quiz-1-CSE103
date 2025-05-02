#include <stdio.h>

int main() {
    float salary;
    int score;

    printf("Enter current salary: ");
    scanf("%f", &salary);

    printf("Enter performance score: ");
    scanf("%d", &score);

    if (score >= 90)
        salary += salary * 0.20;
    else if (score >= 80)
        salary += salary * 0.15;
    else if (score >= 70)
        salary += salary * 0.10;
    else
        printf("No salary increment.\n");

    printf("New Salary: %.2f\n", salary);
    return 0;
}
