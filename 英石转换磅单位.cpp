#include<iostream>

int  ziji(int);
int main()
{
using namespace std;
int AA;
cin >> AA;
int BB = ziji(AA);
cout << AA << "Ӣʯ";
cout << BB << "��" << endl;
	return 0;



}

int ziji(int MM)
{
	return 14 * MM;

}