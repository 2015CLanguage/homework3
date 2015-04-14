#include <stdio.h>

int main()
{
    int a,b,c;
    int max;
    printf("请输入3个数，中间用逗号隔开:");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a>b) {max=a;}
    else {max=b;}
    if (c>max) {max=c;}
    else {max=max;}
    printf("最大的数是:%d\n",max);
    return 0;
}
