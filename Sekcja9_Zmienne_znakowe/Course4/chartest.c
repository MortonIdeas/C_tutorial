#include<stdio.h>
int main()
{
    char c;
    while((c=getchar())!=EOF)
    {
        printf("%d\n", c);
    }
    return 0;
}
