#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("请输入三个整数，用逗号隔开\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)
		d=a;
	else d=b;
	if(c>d)
		d=c;
  printf("最大的数是:%d\n",d);
}
