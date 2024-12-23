#include<stdio.h>
int main()
{
    char c;
    while((c = getchar())!= EOF)
    {
        if(c>='0' && c<='9')
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}