#include<stdio.h>

int main()
{
	printf("本程序用于比较大小（基于C语言）\n");
	int a=0, b=0, c=0;
	int max(int x, int y);   /*std::cin >> a; std::cin >> b; 这里也可以使用scanf_s("%d %d", a,b);进行表达只是使用此函数目前有些问题*/
	scanf_s("%d %d", &a, &b);
	c = max(a, b);
	printf_s("最大值=%d", c);
	return 0;
}

int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return z;
}