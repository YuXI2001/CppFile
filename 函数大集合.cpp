#include<stdio.h>
#include<math.h>
const float PI = 3.1415926f;
void judge(int a = 0, int b = 0, int c = 0)
{

	printf("���������ڱȽϴ�С������C���ԣ�\n");

	int max(int x, int y);   /*std::cin >> a; std::cin >> b; ����Ҳ����ʹ��scanf_s("%d %d", a,b);���б��ֻ��ʹ�ô˺���Ŀǰ��Щ����*/
	scanf_s("%f %f", &a, &b);
	c = max(a, b);
	printf_s("���ֵ=%d", c);


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
		("���������ڼ���Բ��������ܳ�,�������������\n");
	printf("���������Բ����İ뾶:\n");

	while (1)//ʹ��ѭ������while
	{
		scanf_s("%f", &radius);

		if (radius <= 0)
		{
			printf("�����ֵ���������!������!\n");
		}

		else
		{
			square = radius * radius * PI;
			volume = radius * radius * radius * PI * 4 / 3;
			perimeter = 2 * PI*radius;
			area = 4 * PI*radius*radius*radius*radius;
			printf("Բ�������%f\nԲ���ܳ���%f\n��ı������%f\n��������%f\n", square, perimeter, area, volume);
			break;//���ǰ뾶����0����Ȼ�޷��������
		}
	}
	return 0;
}
int triangle()
{
	printf("�������������������߳��Լ������������\n");
	float a = 0, b = 0, c = 0, area = 0, s = 0;
	printf("�ֱ����������߳�\n");
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
				printf("�����������Ϊ%f", area); break;
				
			}
			else
			{
			printf("�������β�����,����������\n");
			}
		}
		else
		{
printf("�������β����ڣ�����������\n");
		}
	}
	return 0;
}



int main()
{
	printf("�����򼯺��˰������㿪�����Ƚϴ�С�Ⱥ���ָ���Ҳ�Ǹ��������ֵĺ����󼯺�\n");
	printf("�������Ӧ��������ִ�����Ӧ�ĺ���: 1.�Ƚϴ�С 2.Բ����  3.���������   \n");
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

