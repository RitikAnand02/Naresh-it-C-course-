// goto statement...

#include<stdio.h>
#include<conio.h>
int main()
{
    goto a;
    c:
    puts("Hyd"); goto last;
    b:
    puts("Amerpet");
    goto c;
    a:
    puts("Ritik");
    goto b;
    last:
    getch();

}