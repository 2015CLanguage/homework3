#include<stdio.h>
int main()
{
	int a,b,c;
	printf("输入三个整数:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)
	  if(b<c)
	    printf("max=%d\n",c);
	  else
	    printf("max=%d\n",b);
	else if(a>c)
		printf("max=%d\n",a);
	else
		printf("max=%d\n",c);
	return 0;
}
