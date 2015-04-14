#include <stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) d=a;
		else d=b;
		if(d>c) d=d;
			else d=c;
	printf("最大数=%d\n",d);
}
