#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		if(b>c)
			printf("max=%d\n",a);
		else
			if(a>c)
				printf("max=%d\n",a);
			else
				printf("max=%d\n",c);
    else
		if(b>c)
			printf("max=%d\n",b);
		else
			printf("max=%d\n",c);
    return 0;
}

