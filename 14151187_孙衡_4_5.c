#include<stdio.h>
int main()
{
int x;
char g;
scanf("%d",&x);
if(x>=90) g='A';
else if(x>=80) g='B';
else if(x>=70) g='C';
else if(x>=60) g='D';
else g='E';
printf("%c",g);
return 0;
}
