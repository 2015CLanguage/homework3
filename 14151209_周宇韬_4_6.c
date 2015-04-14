#include <stdio.h>

int main()
{
    float x,y;
    printf("请输入x:");
    scanf("%f",&x);
    if (x<1) {y=x;}
    else if (1<=x<10) {y=2*x-1;}
    else if (x>=10) {y=3*x-11;}
    printf("y的值是:%f\n",y);
    return 0;
}
