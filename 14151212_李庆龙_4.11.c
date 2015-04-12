# include "stdio.h"
int main()
{
	int n, i, j,m;
	int list[50];
	printf("input the number you want to order:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("number %d is: ", i + 1);
		scanf_s("%d", &list[i]);
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j<n - i-1; j++)
		{
			if (list[j]>list[j + 1])
			{
				m = list[j];
				list[j] = list[j + 1];
				list[j + 1] = m;
			}
		}
	}
	for (i = 0; i<n; i++)
		printf("%3d", list[i]);
	system("pause");

}
