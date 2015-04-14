#include<stdio.h>

int main()
{
	int a, b, c;
	printf("Please input three number\n");
	scanf("%d, %d, %d", &a, &b, &c);
	if (a<b)
		a=b;
	if (a<c)
		a=c;
	printf("The max number is %d\n", a);
	return 0;
}
