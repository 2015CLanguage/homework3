#include <stdio.h>
int main()
{
	int max(int x,int y,int z);
	int a,b,c,m;
	scanf("%d,%d,%d",&a,&b,&c);
	m=max(a,b,c);
	printf("max=%d\n",m);
	return 0;
}
int max(int x,int y,int z)
{
	int n;
	if(x>y)n=x;
    else n=y;
	if(n>z)n=z;
	else n=z;
	return(n);
}
