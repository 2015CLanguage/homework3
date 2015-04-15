Enter file contents here
# include <stdio.h>
int main()
{
	double x, y;
	scanf("%lf%lf", &x, &y);
	if ((x - 2)*(x - 2) + (y - 2)*(y - 2) <= 1)
		printf("塔高为10米");
	else if ((x - 2)*(x - 2) + (y + 2)*(y + 2) <= 1)
		printf("塔高为10米");
	else if ((x + 2)*(x + 2) + (y - 2)*(y - 2) <= 1)
		printf("塔高为10米");
	else if ((x + 2)*(x + 2) + (y + 2)*(y + 2) <= 1)
		printf("塔高为10米");
	else printf("塔高为0米");
	return 0;
}
