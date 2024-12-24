#include<stdio.h>
int main()
{
    /**/
    int state = 0;
    char c;
    while((c = getchar())!=EOF)
    {
        switch (state)
        {
        case 0:
            if(c=='/')
            {
                state = 1;
            }
            else
            {
                putchar(c);
            }
            break;
        case 1:
            if(c=='*')
            {
                state = 2;
            }
            else
            {
                putchar('/');
                putchar(c);
                state = 0;
            }
            break;
        case 2:
            if(c=='*')
            {
                state = 3;
            }
            break;
        case 3:
            if(c=='/')
            {
                state = 0;
            }
            break;
        default:
            printf("Witam, dzialam");
            break;
        }
    }
    return 0;
}