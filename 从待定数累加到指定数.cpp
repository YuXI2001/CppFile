#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int sum = 0;
	int ii = 0;
	cout << "���������ڴ���ʼ�����ۼӵ���ֹ����" << endl;
	cout << "������ʼ����" << endl;
	cin >> i;
	cout << "����ĩβ����" << endl;
	cin >> ii;
	if (ii > i)
	{
		for (i; i <=ii; i++)
		{
			sum += i;
	
		}
	}
	else
	{
		cout << "����֮ǰ���ݲ��ɴ��ں���"<<endl;

	}
			cout << sum;
	return 0;
}