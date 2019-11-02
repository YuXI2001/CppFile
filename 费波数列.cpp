#include<stdio.h>
int main()
{
	int a = 1, b = 0, i = 0,c=1;
	for (i = 0; i <2; i++)
	{
		printf("%d\n", c);
		c = a+b;
		b = a + b;
		
	}
	for (i = 3; i <= 10; i++)
	{
		printf("%d\n", c);
		a = a + b;
		c = a;
		b = a + b;
		printf("%d\n", c);
		c = b;
	}
	getchar();
	return 0;
}