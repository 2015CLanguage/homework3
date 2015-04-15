Enter file contents here
#include <stdio.h>
int main()
{
	int d, b, c, i;
	printf("请输入三个整数i,b,c:\n");
	scanf("%d,%d,%d", &i, &b, &c);
	if (i>b)
	{if(i>c)
			d=i;
		else
		d=c;}
	else 
	 if(b<c)
		 d=c;
		 else
		 if(c>b)
			 d=b;
			 else
			 d=c;
    printf("d=%d\n", d);
return 0;
}
