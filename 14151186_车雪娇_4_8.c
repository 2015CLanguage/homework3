#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade,t;
    scanf("%d",&grade);
    if (grade<60)
        t='E';
    if (grade>=60&&grade<=69)
        t='D';
    if (grade>=70&&grade<=79)
        t='C';
    if (grade>=80&&grade<=89)
        t='B';
    if (grade>=90&&grade<=100)
        t='A';
    printf("%c",t);
    return 0;
}
