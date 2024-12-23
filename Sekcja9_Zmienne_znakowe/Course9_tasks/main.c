#include<stdio.h>
int main()
{
    char c;
    do
    {
        c=getchar();
        putchar(c);
    }while(c != 'q');
    return 0;
}