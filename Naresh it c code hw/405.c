// Null pointer...

#include <stdio.h>
int main()
{
    int *p=NULL; // NULL ptr
    printf("p stored addr %u", p);
   // printf("p value in that addr %d", *p); // not giving value addr...
    return 0;
}