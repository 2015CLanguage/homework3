#include <stdio.h>
int main()
{
	float x,y,z;
	scanf("%f",&x);
	if(x>=1)
	{if(x<10)
        z=2*x-1;
	if(x>=10)
		z=3*x-1;
	}
	else
		z=x;
		printf("y=%f\n",z);

	return 0;
}
