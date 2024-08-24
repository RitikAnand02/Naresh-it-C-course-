// storing of multiple strings...

#include <stdio.h>
int main()
{
    char s[5][20] = {"Virat kohli", "Rohit sharma", "Sachin", "Dhoni", "Dravid"};
    int i;
    puts("NAMES");
    puts("-------------------------------------------");
    for (i = 0; i < 5; i++)
        printf("%c", s[i][i]);
    return 0;
}