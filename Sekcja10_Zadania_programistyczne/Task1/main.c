#include<stdio.h>
int main()
{
    char c;
    int state = 0;
    while((c=getchar())!=EOF)
    {
        switch (state)
        {
        case 0:
            
            putchar(c);
            break;
        case 1:
            /* code */
            break;
        default:
            printf("Cos poszlo nie tak");
            break;
        }
    }
    return 0;
}