/*
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
 a b c d e f g h i j k l m n o p q r s t u v w x y z
*/


#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no row and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            printf("%2c", 96 + c);
        }
        printf("\n");
    }
}