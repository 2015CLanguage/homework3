# include<stdio.h.>
int main()
{
	int a, b, c,m;
	int change(int a, int b);
	printf("input three numbers: ");
	scanf_s("a=%d,b=%d,c=%d", &a, &b, &c);
	m = change(a, b);
	printf("the maximum is %d", change(m, c));
	system("pause");
}
int change(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
