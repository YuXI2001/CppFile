#include<stdio.h>
#include<math.h>
const float PI = 3.1415926f;
void judge(int a = 0, int b = 0, int c = 0)
{

	printf("本程序用于比较大小（基于C语言）\n");

	int max(int x, int y);   /*std::cin >> a; std::cin >> b; 这里也可以使用scanf_s("%d %d", a,b);进行表达只是使用此函数目前有些问题*/
	scanf_s("%f %f", &a, &b);
	c = max(a, b);
	printf_s("最大值=%d", c);


}
int max(int x, int y)
{
	int z;
	if (x > y)z = x;
	else z = y;
	return z;
}
int radius()
{
	float square = 0, volume = 0, radius = 0, perimeter = 0, area = 0;
	printf
		("本函数用于计算圆的面积、周长,球的体积、表面积\n");
	printf("请输入待测圆或球的半径:\n");

	while (1)//使用循环函数while
	{
		scanf_s("%f", &radius);

		if (radius <= 0)
		{
			printf("输入的值必须大于零!请重试!\n");
		}

		else
		{
			square = radius * radius * PI;
			volume = radius * radius * radius * PI * 4 / 3;
			perimeter = 2 * PI*radius;
			area = 4 * PI*radius*radius*radius*radius;
			printf("圆的面积是%f\n圆的周长是%f\n球的表面积是%f\n球的体积是%f\n", square, perimeter, area, volume);
			break;//除非半径大于0，不然无法输出函数
		}
	}
	return 0;
}
int triangle()
{
	printf("本函数用于输入三条边长以计算三角形面积\n");
	float a = 0, b = 0, c = 0, area = 0, s = 0;
	printf("分别输入三条边长\n");
	while (1)
	{


		scanf_s("%f %f %f", &a, &b, &c);

		if (a + b >c)
		{

			if (b + c > a)
			{
				if (a + c > b)				
					s = (a + b + c) / 2;
				area = sqrt(s*(s - a)*(s - b)*(s - c));
				printf("此三角形面积为%f", area); break;
				
			}
			else
			{
			printf("该三角形不存在,请重新输入\n");
			}
		}
		else
		{
printf("该三角形不存在，请重新输入\n");
		}
	}
	return 0;
}



int main()
{
	printf("本程序集合了包括计算开方，比较大小等函数指令，这也是个我来练手的函数大集合\n");
	printf("输入相对应的数字以执行相对应的函数: 1.比较大小 2.圆与球  3.三角形面积   \n");
	int A1;
	scanf_s("%d", &A1);
	switch (A1)
	{
	case 1:judge(); break;
	case 2:radius(); break;
	case 3:triangle(); break;
	}



	return 0;
}

