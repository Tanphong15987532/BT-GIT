#include <iostream>
#include <cstdlib>
#include <ctime>;
using namespace std;

bool testResult(int x, int a, int b);

int main()
{
	cout << "cho phep tinh sau:" << endl;
	srand(time(NULL));
	int a = (rand() % 100) + 1;
	int b = (rand() % 100) + 1;
	
	int x;
	cout <<" cho biet ket qua: "<< a<<" + "<< b<<"= ";
	cin >> x;

	if (testResult(x,a,b)==true)
	{
		cout << "chuc mung ban qua dc lop 1";
	}
	else
	{
		cout << "chia buon vi ban da rot lop 1";
	}

	cout << endl;
	system("pause");
	return 0;
}



bool testResult(int x, int a, int b)
{
	int sum = a + b;
	if(sum==x)
	{
		return true;
	}
	else
	{
		return false;
	}
}



