#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Podaj 1 liczbe:");
    scanf("%d", &num1);
    
    printf("Podaj 2 liczbe:");
    scanf("%d", &num2);

    printf("Kalkulator: ");
    printf("Dodawanie:%d+%d=%d \n", num1, num2, num1+num2);
    printf("Odejmowanie:%d-%d=%d \n", num1, num2, num1-num2);
    printf("Mnozenie:%d*%d=%d \n", num1, num2, num1*num2);
    printf("Dzielenie calkowitoliczbowe:%d/%d=%d \n", num1, num2, num1/num2);
    printf("Operacja modulo(reszta z dzielenia):%d %d=%d \n", num1, num2, num1 % num2);
    

    return 0;
}