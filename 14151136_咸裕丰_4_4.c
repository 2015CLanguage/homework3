#include"stdio.h"
int main()
{
	int a,b,c,m;
	printf("请输入三个正整数:");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b)
	    m=b;
	else
        m=a;
	if(m<c)
		m=c;
	printf("最大的数为:%d\n",m);
	return 0;
}
