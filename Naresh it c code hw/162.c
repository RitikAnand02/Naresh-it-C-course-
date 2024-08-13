// finding armstrong no using do while only 3 no ...

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNumber, r, result = 0, n = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNumber = num;

    do
    {
        originalNumber /= 10;
        n++;
    } while (originalNumber != 0);

    originalNumber = num;

     while (originalNumber != 0)
    {
        r = originalNumber % 10;
        result += pow(r, n); 
        originalNumber /= 10;
    }
    if ( num== result)
        printf("%d %dArmstrong number",num,result);
    else
        printf("%d %d not an Armstrong number",num,result);

    return 0;
}