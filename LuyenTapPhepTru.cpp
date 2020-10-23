#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


bool ktKetQua(int x, int a, int b)
{
	for (int i = 0; i <= 100; i++)
	{
		int sum = a - b;
		if (sum == x)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	int a, b, x;
	srand(time(NULL));
	a = (rand() % 100) + 1;
	b = (rand() % 100) + 1;
	cout << a << "-" << b << "=";
	cin >> x;
	if (ktKetQua(x,a,b)==true)
	{
		cout << "dung";
	}
	else
	{
		cout << "sai";
	}
	system("pause");
	return 0;
}