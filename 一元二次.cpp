#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, t,x1,x2,d;
	cin >> a; cin >> b; cin >> c;
	t = (b*b - 4 * a*c);
	d = 2 * a;//��d������2a
	if (t >= 0)//������������
	{
		x1 = (-b + sqrt(t)) / d;//�������������������ĺ���
		x2 = (-b - sqrt(t)) /d ;//���������2*a��ϵͳ���ȳ�2�ٳ�a
		cout << x1 << endl;
		cout << x2 << endl;
	}
	else
	{
		cout << "�˸��޽�" << endl;//������������������
	}
	return 0;

}