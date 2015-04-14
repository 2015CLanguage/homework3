#include<stdio.h>
void main()
{
	int x,c;
	scanf("%d",&x);
	c=x/10;
	switch(c)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5: printf("E");break;
	case 6: printf("D");break;
	case 7: printf("C");break;
	case 8: printf("B");break;
	case 9: printf("A");break;
	case 10: printf("A");break;
	}
}
