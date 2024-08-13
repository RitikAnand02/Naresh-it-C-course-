/*2)Time Conversion

Write a program to take input for seconds from the user , And convert it into Hour, Minutes , Second format.

input:- Enter the number of seconds: 3671

output:-3671 seconds is equivalent to 1 hours, 1 minutes, and 11 seconds.*/

#include <stdio.h>
void main()
{
    int n = 3671, h, m, s;
    h = n / 3600;
    m = n % 3600 / 60;
    s = n % 3600 % 60;
    printf("hr :%d mnt: %d sec: %d", h, m, s);
}
