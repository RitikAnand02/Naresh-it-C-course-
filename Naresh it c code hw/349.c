// Direct intialization of a string...

#include <stdio.h>
int main()
{
    char s[] = "Naresh\tIT\nAmeerpet\0Hyd";
    printf("%s\n", s);
    puts(s);
    printf(s);
    return 0;
}