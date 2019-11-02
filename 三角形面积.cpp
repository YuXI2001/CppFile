#include<stdio.h>
#include<math.h>

int main()
{
	printf("本函数用于输入三条边长以计算三角形面积\n");
	float a = 0, b = 0, c = 0, area = 0, s = 0;
	printf("分别输入三条边长\n");
	scanf_s("%f %f %f", a, b, c);

	if (a + b > c)
	{

		if (b + c > a)
		{
			if (a + c > b)
				s = (a + b + c) / 2;
			area = sqrt(s*(s - a)*(s - b)*(s - c));
			printf("此三角形面积为%f", area);
		}
		else
		{
			printf("该三角形不存在");
		}
	}
	else 
	{
		printf("该三角形不存在");
	}
	return 0;
}