#include<iostream>
int main()
{
	using namespace std;
	cout << "本程序用于计算某个值的某次幂" << endl << "请输入待测值\n";
	double A,B,D;
	cin >> A;
	cout << "请输入多少次幂" << endl;
	cin >> B;
	cout << "计算中" << endl << "得出\n";
	double C = pow(A, B);
	cout << C << endl << "输入任何数值后按确认后退出";
	cin >> D;
	return 0;

}