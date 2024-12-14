#include<stdio.h>
int main()
{
    float num1;
    float num2;

    printf("Podaj pierwszy numer: ");
    scanf("%f", &num1);

    printf("Podaj drugi numer: ");
    scanf("%f", &num2);

    printf("Suma wynosi: %.2f ", num1 + num2);
    return 0;
}