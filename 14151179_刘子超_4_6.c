#include<stdio.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
		y=x;
	if(x>=10)
		y=x*3-11;
	if(x>=1&&x<10)
	    y=x*2-1;
	printf("%d",y);
}
