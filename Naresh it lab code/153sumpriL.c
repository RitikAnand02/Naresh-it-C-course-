/*Express as Sum Of prime
Write a program in C to check whether a number can be expressed as the sum of two prime.
*/

// #include <stdio.h>
// int main()
// {
//     int n, s, s1, d;
//     printf("Enter the no:");
//     scanf("%d", &n);
//     for (int i = 2; i < n / 2; i++)
//     {
//         s = 0, s1 = 0, d = n - i;
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 s++;
//                 break;
//             }
//         }
//         for (int j = 2; j < d; j++)
//         {
//             if (d % j == 0)
//             {
//                 s1++;
//                 break;
//             }
//         }

//         if (s == 0 && s1 == 0)
//         {
//             printf("%d=%d+%d\n", n, i, d);
//         }
//     }
// }




#include <stdio.h>

int main() {
   int n, i, j, k, c1,c2;
   
   printf("Enter a number");
   scanf("%d",&n);
   
   for(i=1;i<=n/2;i++)
   {
       for(j=1;j<=n;j++)
       {
           c1=c2=0;
           if(i+j==n)
           {
               for(k=1; k<=i || k<=j ;k++)
               {
                   if(i % k ==0)
                   c1++;
                   if(j % k ==0)
                   c2++;
               }
               if(c1 == 2 && c2 == 2)
               printf("%d + %d = %d\n",i,j,i+j);
           }
       }
   }
    return 0;
}