#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, t,x1,x2,d;
	cin >> a; cin >> b; cin >> c;
	t = (b*b - 4 * a*c);
	d = 2 * a;//用d来代表2a
	if (t >= 0)//括号里填条件
	{
		x1 = (-b + sqrt(t)) / d;//满足条件运行这个里面的函数
		x2 = (-b - sqrt(t)) /d ;//如果这里用2*a，系统会先除2再乘a
		cout << x1 << endl;
		cout << x2 << endl;
	}
	else
	{
		cout << "此根无解" << endl;//不符合条件运行这里
	}
	return 0;

}