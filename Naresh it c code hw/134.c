#include <stdio.h>
int main()
{
    int a = 0;
    switch (a++)
    {
    case 0:
        printf("jhanvi");
        break;
        switch (a++)
        {
        case 1:
            printf("kiara");
            break;

        default:
            printf("rashmika");
            break;
        }

    default:
        printf("alia");
    }
    return 0;
}