#include<stdio.h>
void main()
{
	int a,b,c;
	printf("请输入三个整数a,b,c:");   //提示用户输入三个整数
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b)                          //比较a,b
		if(a>c)                      //比较a,c
		printf("最大的数是%d\n",a);           
		else
		printf("最大的数是%d\n",c);            
	else                                
		if(b>c)                      //比较b,c
		printf("最大的数是%d\n",b);
		else
		printf("最大的数是%d\n",c);

}
