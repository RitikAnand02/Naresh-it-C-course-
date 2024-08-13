// switch case statement....

#include <stdio.h>
int main()
{
    int a;

    switch (a = *("I Like"
                  "ABCD" +
                  7))
    {
    case 65:
        printf("Alia Bhatt");
        break;
    case 66:
        printf("Kiara Advni");
        break;
    case 67:
        printf("Pooja Hegde");
        break;
    default:
        printf("Jhnavi Kapoor");
    }
    printf("a=%d", a);
}