#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c,d,x,y;
    printf("请分别输入x和y坐标，用逗号隔开:");
    scanf("%f,%f",&x,&y);
    a=sqrt(pow(x-2, 2)+pow(y-2, 2));
    b=sqrt(pow(x+2, 2)+pow(y-2, 2));
    c=sqrt(pow(x+2, 2)+pow(y+2, 2));
    d=sqrt(pow(x-2, 2)+pow(y+2, 2));
    if (a<=2||b<=2||c<=2||d<=2) {
        printf("建筑高度为10\n");
    }
    else {printf("建筑高度为0\n");}
    return 0;
}
