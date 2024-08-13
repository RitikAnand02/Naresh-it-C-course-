#include <stdio.h>
#include <string.h>
int main()
{
    char c1, c2;
    printf("Enter the first character:");
    scanf("%c", &c1);
    printf("Enter the second character:");
    scanf(" %c", &c2);
    printf("%c ASCII value is %d", c1, c1);

    printf("\n%c ASCII value is %d", c2, c2);

    printf("\nSum of %c & %c is %d\n", c1, c2, c1 + c2);
}