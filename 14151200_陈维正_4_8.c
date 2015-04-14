#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
if(x>=90&&x<=100)
	printf("A\n");
	if(x>=80&&x<90)
		printf("B\n");
		if(x>=70&&x<80)
			printf("C\n");
			if(x>=60&&x<70)
				printf("D\n");
				if(x<60&&x>=0)
					printf("E\n");
else
	printf("error\n");
return 0;
}
