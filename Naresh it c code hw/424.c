// Fucntions without arugments , with return values... finds avg...

#include <stdio.h>
float avg() // fun def
{
    float a, b;
    long f = 1;
    printf("Enter a,b values ");
    scanf("%f%f", &a, &b);
    return a / b;
}
int main() // caller
{
    printf("Avg=%.2f", avg()); // fun calling
    return 0;
}
