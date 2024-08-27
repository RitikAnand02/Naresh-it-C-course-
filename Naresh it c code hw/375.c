// Otp code generation :

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char s[10], ch;
    int i, n;
    while (1)
    {
        srand(time(0));
        for (i = 0; i < 5; i++)
        {
            s[i] = 48 + (rand() % 10) + 1;
        }
        s[i] = '\0';
        printf("O T P: %s\n", s);
        fflush(stdin);
        printf("Resend O T P [y/n] ");
        scanf("%c", &ch);

        if (ch == 'n' || ch == 'N')
            break;
    }
}