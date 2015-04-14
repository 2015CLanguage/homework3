#include <stdio.h>

int main()
{
    int a;
    printf("请输入你的成绩:");
    scanf("%d",&a);
    printf("你的等级为:");
    if (a>=90)     printf("\n");
    else if(80<=a) printf("B\n");
    else if(70<=a) printf("C\n");
    else if(60<=a)  printf("D\n");
    else if(0<=a)  printf("E\n");
    return 0;
}
