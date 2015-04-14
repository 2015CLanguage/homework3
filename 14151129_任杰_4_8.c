#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	y=x/10;
	switch(y)
	{
		case 0: y=0;printf("等级为E");break;
		case 1: y=1;printf("等级为E");break;
		case 2: y=2;printf("等级为E");break;
		case 3: y=3;printf("等级为E");break;
		case 4: y=4;printf("等级为E");break;
		case 5: y=5;printf("等级为E");break;
		case 6: y=6;printf("等级为D");break;
		case 7: y=7;printf("等级为C");break;
		case 8: y=8;printf("等级为B");break;
		case 9: y=9;printf("等级为A");break;
		case 10: y=10;printf("等级为A");break;
		default :printf("error!");
	}
	return 0;
}
