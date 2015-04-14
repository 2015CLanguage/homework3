#include <stdio.h>
#include <math.h>

int main()
{
	float x,y,a,b,c,d;
    scanf("%f%f",&x,&y);
    int flag=0;
    a=(x-2)*(x-2)+(y-2)*(y-2);
    b=(x+2)*(x+2)+(y-2)*(y-2);
    c=(x-2)*(x-2)+(y+2)*(y+2);
    d=(x+2)*(x+2)+(y+2)*(y+2);
    if (a<=1)  flag=1;
    if (b<=1)  flag=1;
    if (c<=1)  flag=1;
    if (d<=1)  flag=1;
    if (flag)  printf("10\n");
     else printf("0\n");
	return 0;
}
