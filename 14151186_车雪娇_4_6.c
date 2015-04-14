#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<1)
        y=x;
    if(1<=x&&x<10)
        y=2*x-1;
    else
        y=3*x-11;

    printf("x=%d,y=%d\n",x,y);
    return 0;
}
