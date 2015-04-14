#include<stdio.h>
int main()
{
	float s;
	char g;
	int c;
	printf("请输入分数:");
	scanf("%f",&s);
	while(s<=0||s>100)
	{printf("，输入有误,请再次输入分数");
	 scanf("%f",&s);
	}	
	c=int(s/10);
	switch(c)
	{case 0:
	 case 1:
	 case 2:
	 case 3:
	 case 4:
	 case 5:g='E';break; 
	 case 6:g='D';break;
	 case 7:g='C';break;
	 case 8:g='B';break;
	 case 9:
	 case 10: g='A';
	}
	printf("您的成绩等级为：%c\n",g);
	return 0;
}
