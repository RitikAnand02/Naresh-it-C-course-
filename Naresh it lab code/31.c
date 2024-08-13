#include <stdio.h>
int main()
{
    float cm, inches;
    printf("centimeters:");
    scanf("%f", &cm);
    inches = cm/2.54;
    printf("%f", inches);
}