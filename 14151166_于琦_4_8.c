#include<stdio.h>
int main()
{
    int x,y;
	scanf("%d",&x);
	y=x/10;
	switch(y)
	{
	    case 10:
	    case 9:printf("A\n");break;
    	case 8:printf("B\n");break;
    	case 7:printf("C\n");break;
    	case 6:printf("D\n");break;
    	case 5:
    	case 4:
	    case 3:
    	case 2:
    	case 1:
    	case 0:printf("E\n");break;
		default:printf("enter data error!\n");
	}
	return 0;
}
