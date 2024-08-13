/*Write a C program that will ask for a person’s name and his/her game score. Then it will ask for a second person’s name and score. The program will print the winner’s name and also print by how many

points that person won by comparing the scores. Develop this program by using switch case.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name1[20], name2[20];
    int score1, score2;
    printf("Enter name of 1st person ");
    scanf("%s", name1);
    printf("Enter score ");
    scanf("%d", &score1);
    printf("Enter name of 2nd person ");
    scanf("%s", name2);
    printf("Enter score ");
    scanf("%d", &score2);

    switch (score1 > score2)
    {
    case 1:

        printf(" winner name=%s\n", name1);
        printf("points won=%d", score1 - score2);
        break;

    default:
        printf("winner name=%s\n", name2);
        printf("points won=%d", score2 - score1);
        break;
    }
}