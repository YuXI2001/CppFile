/*#include<iostream>
using namespace std;
#define PI 3.1415926
int main(int agrc,char*argv[])
{
	double square = 0, volume = 0, radius = 0;
	cout << "请输入半径长度:";
	cin >> radius;
	square = radius*radius*PI; volume = radius*radius*radius*PI*4/3;
	cout << "若半径为" << radius << ",则该圆的面积为" << square << endl;
	cout << "该球的体积为" << volume << endl;
	return 0;
	
}*/


#include<stdio.h>
#define PI 3.1415926
int main(int agrc, char *argv[])
{
	float square = 0, volume = 0, radius = 0,perimeter=0,area=0;
	printf
		("本函数用于计算圆的面积、周长,球的体积、表面积\n");
	printf("请输入待测圆或球的半径:\n");

	while (1)
	{
		scanf_s("%f", &radius);

		if (radius <=0)
		{
			printf("输入的值必须大于零!请重试!\n");
		}

		else
		{
			square = radius * radius * PI;
			volume = radius * radius * radius * PI * 4 / 3;
			perimeter = 2 * PI*radius;
			area = 4 * PI*radius*radius*radius*radius;
			printf("圆的面积是%f\n圆的周长是%f\n球的表面积是%f\n球的体积是%f\n", square,perimeter,area,volume);
			break;
		}
	}
	return 0;
}