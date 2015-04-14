
#include <stdio.h>
int main ()
{
	int x,y;
	printf("输入一个x:");
	scanf("%d",&x);
	if (x<1)
		{ y=x;
		  printf("x=%d,y=x=%d\n",x,y);
		}
	else if (x<10)
		{ y=2*x-1;
		  printf("x=%d,y=2*x-1=%d\n",x,y);
		}
	else if (x>=10)
		{ y=3*x-11;
		  printf("x=%d,y=3*x-11=%d\n",x,y);
		}
	return 0;
}
