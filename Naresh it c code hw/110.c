// Read a std id , name ,6 sub ,marks,tot, avg and grade using nested if()....

#include <stdio.h>
int main()
{
    int id, tel, eng, mat, hin, sci, soc, tot;
    char name[20];
    float avg;
    printf("Enter std id , name, 6 sub marks ");
    scanf("%d%s%d%d%d%d%d%d", &id, &name, &tel, &eng, &mat, &hin, &sci, &soc);
    tot = tel + eng + mat + hin + sci + soc;
    avg = tot / 6.0;
    printf("Id\tName\tTot\tAvg\tGrade\n");
    printf("----------------------------------------------------------------\n");
    printf("%d\t%s\t%d\t%.2f\t", id, name, tot, avg);
    if (tel >= 35 && eng >= 35 && hin >= 35 && mat >= 35 && sci >= 35 && soc >= 35)
    {
        if (avg >= 75)
            printf("Distinction");
        else if (avg >= 60)
            printf("1st class");
        else if (avg >= 50)
            printf("2nd class");
        else
            printf("3rd class");
    }
    else
        printf("failed");
}
