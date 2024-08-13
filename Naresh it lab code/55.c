/*2)Write a program that takes the initial velocity (in meters per second), acceleration (in meters per second squared), and time (in seconds) from the user using scanf. Calculate the distance traveled by an object using the formula:

formula :
( distance= initial_velocity × time+ 1/2 * acceleration × time * time )

input :
Enter the initial velocity (m/s):  10

Enter the acceleration (m/s^2):  20

Enter the time (s): 4

output :
The distance traveled is 200.00 meters.*/
#include <stdio.h>
int main()
{
    int vel, a, t, dis;
    scanf("%d%d%d", &vel, &a, &t);
    dis = vel * t + (a * t * t)/2  ;
    printf("distance traveled is %d meters", dis);
}
