#include<stdio.h>
int main()
{
	int a,b,c;
	printf("please input 3 num :");

	scanf("%d,%d,%d",&a,&b,&c);
	if(b>a)
		if(c>=b)
			a=c;
		else
			a=b;
		
	if(c>a)
		if(b>=c)
			a=b;
		else
			a=c;
	
	printf("the max num is %d",a);
return 0;
}
