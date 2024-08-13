/*Time Validate
Program to take the hours and minutes as input by the user and the show that whether it is AM or PM using if-else statement
*/

#include <stdio.h>
int main()
{
    int hr, min;
    scanf("%d%d", &hr, &min);
    if (hr >12  && hr  <24|| min < 0 && min > 60)
    {
        printf("%d:%d is P.M",hr-12,min);
    }
    else
    {
        printf("%d:%d isA.M",hr,min);
    }
}