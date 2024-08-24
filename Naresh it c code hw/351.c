// storing of multiple strings...

#include <stdio.h>
int main()
{
    char s[5][20] = {"Virat kohli", "Rohit sharma", "Sachin", "Dhoni", "Gill"};
    int i;
    puts("NAMES");
    puts("-------------------------------------------");
    for (i = 0; i < 5; i++)
        puts(s[i]);
    return 0;
}