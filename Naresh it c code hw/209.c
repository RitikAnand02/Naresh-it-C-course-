/*
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
*/

#include <stdio.h>
int main()
{
    int nr, nc, r, c;
    printf("Enter no row and columns ");
    scanf("%d%d", &nr, &nc);
    for (r = 1; r <= nr; r++)
    {
        char ch=64+nc;
        for (c = 1; c <= nc; c++)
        {
            if (r % 2 == 0)
            {
                printf("%2c", ch--);
            }
            else
            {
                printf("%2c", 64 + c);
            }
        }
        printf("\n");
    }
}