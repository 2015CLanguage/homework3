# include <stdio.h>
void main()
{
	printf("请在下方输入三个整数：\n");
	int max(int x, int y, int z);
	int a, b, c, d;
	scanf_s("%d%d%d", &a, &b, &c);
	d = max(a, b, c);
	printf("max = %d\n", d);
}
int max(int x, int y, int z)
{
	int m, n;
	if (x>y) m = x;
	else m = y;
	if (m>z) n = m;
	else n = z;
	return(n);
}
