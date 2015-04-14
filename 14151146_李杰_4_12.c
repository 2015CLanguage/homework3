#include<stdio.h>
#include<math.h>
void main()
{
	int h;
	float x,y,distance;
	printf("Please input coordinate.\n");
	scanf("(%f,%f)",&x,&y);
	if(x<0) x=-x;
	if(y<0) y=-y;
	distance=sqrt((x-2)*(x-2)+(y-2)*(y-2));
	if(distance<=1)
		h=10;
	else
		h=0;
	printf("The height is %dm.\n",h);
}
