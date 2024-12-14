#include<stdio.h>
int main()
{
    int numer1;
    int number2;

    printf("Podaj pierwsza liczbę");
    scanf("%d", &numer1);

    printf("Podaj druga liczbę");
    scanf("%d", &number2);
    
    printf("Piersza liczba: %d, Druga liczba: %d", numer1, number2);
    return 0;
}