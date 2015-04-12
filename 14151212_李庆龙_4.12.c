# include<stdio.h>
# include<math.h>
int main()
{
	float x, y;
	printf("input the location: ");
	scanf_s("x=%f,y=%f", &x, &y);
	if (pow(x - 2, 2) + pow(y - 2, 2) == 1)
		printf("the height is 10 metre.\n");
	else if (pow(x + 2, 2) + pow(y-2,2)==1)
		printf("the height is 10 metre.\n");
	else if (pow(x - 2, 2) + pow(y +2, 2) == 1)
		printf("the height is 10 metre.\n");
	else if (pow(x + 2, 2) + pow(y + 2, 2) == 1)
		printf("the height is 10 metre.\n");
	else
		printf("the height is 0 metre.\n");
	system("pause");
}
