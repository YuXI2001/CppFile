#include<stdio.h>

int main()
{
	printf("���������ڱȽϴ�С������C���ԣ�\n");
	int a=0, b=0, c=0;
	int max(int x, int y);   /*std::cin >> a; std::cin >> b; ����Ҳ����ʹ��scanf_s("%d %d", a,b);���б��ֻ��ʹ�ô˺���Ŀǰ��Щ����*/
	scanf_s("%d %d", &a, &b);
	c = max(a, b);
	printf_s("���ֵ=%d", c);
	return 0;
}

int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return z;
}