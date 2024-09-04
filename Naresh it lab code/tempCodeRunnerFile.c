#include <stdio.h>
// void main()
// {
//     int a[100], b[100], i, s1, s2, j;
//     int *p = a;

//     printf("Enter 1st array size 1 - 100 ");
//     scanf("%d", &s1);
//     printf("Enter %d integers for a array ", s1);
//     for (i = 0; i < s1; i++)
//         scanf("%d", &a[i]);
//     printf("Enter 2nd array size 1 - 100 ");
//     scanf("%d", &s2);

//     printf("Enter %d integers for a array ", s2);
//     for (i = 0; i < s2; i++)
//         scanf("%d", &b[i]);
//     for (i = s1, j = 0; j < s2; i++, j++)
//         a[i] = b[j];
//     for (i = 0; i < s1 + s2; i++)
//     {
//         for (j = i + 1; j < s1 + s2; j++)
//         {
//             if (p[i] > p[j])
//             {
//                 int t = p[i];
//                 p[i] = p[j];
//                 p[j] = t;
//             }
//         }
//     }
//     printf("Elements are ");
//     for (i = 0; i < s1 + s2; i++)
//         printf("%4d", a[i]);
//     int len = s1 + s2, m;
//     float sum = 0;
//     for (i = 0; i < len; i++)
//         sum += p[i];
//     float result = sum / len;
//     printf("\n median=%.2f", result);
// }