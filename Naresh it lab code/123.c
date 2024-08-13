// Using switch statement write a C Program to take the value from the user as input marks of five subjects Physics, Chemistry, Biology, Mathematics, and Computer. Calculate percentage and grade according to the following: Percentage >= 90% : Grade A, Percentage >= 80% : Grade B, Percentage >= 70% : Grade C, Percentage >= 60% : Grade D, Percentage >= 40% : Grade E, Percentage < 40% : Grade F, Using switch statement.

#include <stdio.h>
int main()
{
    int phy, chem, bio, mat, com, p;
    printf("Enter marks of five subjects ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &mat, &com);
    p = (phy + chem + bio + mat + com )/ 5.0;
    p = p / 10;
    switch (p)
    {
    case 9:
        printf("grade A");
        break;
    case 8:
        printf("grade B");
        break;
    case 7:
        printf("grade C");
        break;
    case 5:
        printf("grade D");
        break;
    case 4:
        printf("grade E");
        break;
    case 3:
        printf("grade F");
    }
}