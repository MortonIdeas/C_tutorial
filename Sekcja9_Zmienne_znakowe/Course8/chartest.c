#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    while((c=getchar()) != EOF)
    {
        if(isdigit(c))
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}