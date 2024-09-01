/*
Reverse Words
Write a C program to reverse Words of the Given String?
*/

#include <stdio.h>
int main()
{
    char s[100];
    int i, j, temp = 0;
    printf("Enter the strings ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ' || s[i + 1] == '\0')
        {
            for (j = i; j >= temp; j--)
                printf("%c", s[j]);
            temp = i;
        }
    }

    return 0;
}


//Method -2....

// #include <stdio.h>
// int main()
// {
//   char str[100];
//   printf("Enter string : ");
//   gets(str);

//   int len = 0, sIdx, lIdx, j;
//   for (int i = 0; str[i] != '\0'; i++)
//   {
//     len++;
//   }

//   for (int i = 0; i < len; i++)
//   {
//     if (str[i] != ' ')
//     {
//       sIdx = i, j;
//       for (j = sIdx; str[j] != ' ' && str[j] != '\0'; j++)
//       {
//       }
//       lIdx = j - 1;
//       for (int k = lIdx; k >= sIdx; k--)
//       {
//         printf("%c", str[k]);
//       }
//       printf(" ");
//       i = lIdx;
//     }
//   }

//   return 0;
// }