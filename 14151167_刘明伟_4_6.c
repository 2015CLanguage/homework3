Enter file contents here
# include <stdio.h>
int main()
{
	double x,y;
	scanf("%lf",&x);
	if (x < 1)
		y = x;
	else
		if (1 <= x&&x < 10)
			y = 2 * x - 1;
		else
			y = 3 * x - 1;
	printf("y=%f", y);
	return 0;
}
