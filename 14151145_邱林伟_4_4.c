#include <stdio.h>
void main()
{
    int a,b,c,max;
    printf("请输入三个数:");  
    scanf("%d,%d,%d",&a,&b,&c);    //输入数字
    if(a>b)
	   max=a;
    else 
	   max=b;
    if(max<c)
	   max=c;
    printf("最大数为：%d\n",max);
}
