#include<iostream>
using namespace std;
int main()
{
	int i = 0;
	int sum = 0;
	int ii = 0;
	cout << "本函数用于从起始数字累加到终止数字" << endl;
	cout << "输入起始数字" << endl;
	cin >> i;
	cout << "输入末尾数字" << endl;
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
		cout << "输入之前数据不可大于后面"<<endl;

	}
			cout << sum;
	return 0;
}