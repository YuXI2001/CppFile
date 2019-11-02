#include<iostream>
#include<stdio.h>
#include<string>
int main()
{
	using namespace std;
	cout << "本函数用于将10进制转换为16进制" << endl;
	cout << "请输入待转换数字：";
	int A;
	cin >> A;
	cout << "十进制" << A;
	cout << hex; cout << "=十六进制" << A;

	return 0;
}