/*#include<iostream>
using namespace std;
#define PI 3.1415926
int main(int agrc,char*argv[])
{
	double square = 0, volume = 0, radius = 0;
	cout << "������뾶����:";
	cin >> radius;
	square = radius*radius*PI; volume = radius*radius*radius*PI*4/3;
	cout << "���뾶Ϊ" << radius << ",���Բ�����Ϊ" << square << endl;
	cout << "��������Ϊ" << volume << endl;
	return 0;
	
}*/


#include<stdio.h>
#define PI 3.1415926
int main(int agrc, char *argv[])
{
	float square = 0, volume = 0, radius = 0,perimeter=0,area=0;
	printf
		("���������ڼ���Բ��������ܳ�,�������������\n");
	printf("���������Բ����İ뾶:\n");

	while (1)
	{
		scanf_s("%f", &radius);

		if (radius <=0)
		{
			printf("�����ֵ���������!������!\n");
		}

		else
		{
			square = radius * radius * PI;
			volume = radius * radius * radius * PI * 4 / 3;
			perimeter = 2 * PI*radius;
			area = 4 * PI*radius*radius*radius*radius;
			printf("Բ�������%f\nԲ���ܳ���%f\n��ı������%f\n��������%f\n", square,perimeter,area,volume);
			break;
		}
	}
	return 0;
}