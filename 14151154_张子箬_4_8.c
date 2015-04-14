#include<stdio.h>
int main()
{
	int a;
	char m;
	scanf("%d",&a);
	if(a>100)
		printf("错误");
	else
		switch(a/10)
	{
		case 10:m='A';break;
        case 9:m='A';break;
		case 8:m='B';break;
		case 7:m='C';break;
		case 6:m='D';break;
		default:m='E';
	}
		printf("%c\n",m);
	return 0;
}
