#include<stdio.h>
#include<math.h>

int main()
{
	printf("�������������������߳��Լ������������\n");
	float a = 0, b = 0, c = 0, area = 0, s = 0;
	printf("�ֱ����������߳�\n");
	scanf_s("%f %f %f", a, b, c);

	if (a + b > c)
	{

		if (b + c > a)
		{
			if (a + c > b)
				s = (a + b + c) / 2;
			area = sqrt(s*(s - a)*(s - b)*(s - c));
			printf("�����������Ϊ%f", area);
		}
		else
		{
			printf("�������β�����");
		}
	}
	else 
	{
		printf("�������β�����");
	}
	return 0;
}