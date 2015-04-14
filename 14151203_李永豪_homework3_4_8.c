# homework3
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90) printf("你的成绩等级为：'A'\n");
    else if(a>=80&&a<90) printf("你的成绩等级为：'B'\n");
    else if(a>=70&&a<=79) printf("你的成绩等级为：'C'\n");
    else if(a>=60&&a<=69) printf("你的成绩等级为：'D'\n");
    else if(a<=59) printf("你的成绩等级为：'E'\n");
    
    return 0;
}
