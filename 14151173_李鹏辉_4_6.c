#include <stdio.h>
void main()
{
	int x,y;
	scanf("%d",&x);
	if(x<1)
		y=x;
	else if (x>=10)
		y=3*x-11;
	else
		y=2*x-1;
	printf("y=%d\n",y);
}
