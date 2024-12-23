#include<stdio.h>
int main()
{
    int key;
    char c;
    printf("Podaj o ile nalezy przesunac:\n");
    scanf("%d", &key);
    while((c=getchar())!=EOF)
    {
        if(c >= 'a' && c <= 'z')
        {
            c = c+key;
        }
        if(c > 'z')
        {
            c = (c - 'z') + 'a'- 1;
        }
        putchar(c);
    }
    return 0;
}