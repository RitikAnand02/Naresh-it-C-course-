/*
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
 A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
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
            printf("%2c", 64 + c);
        }
        printf("\n");
    }
}