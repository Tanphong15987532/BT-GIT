#include <iostream>

using namespace std;
void chuvihinhvuong(int a);
void chuvihcn(int a, int b);
void chuvihinhtron(int a);

void chuvihinhvuong(int a)
{
	cout << "nhap vao 1 canh hinh vuong : ";
	cin>>a;
	cout <<"chu vi hinh vuong : " << a*4;
}
void chuvihcn(int a, int b)
{
	cout << "nhap chieu dai hcn : ";
	cin >> a;
	cout << "nhap chieu rong hcn : ";
	cin >> b;
	cout << "chu vi hcn : << (a + b)*2;
}
void chuvihinhtron(int a)
{
	cout << "nhap ban kinh hinh tron : ";
	cin >> a;
	cout << "chu vi hinh tron : "<< (2*a)*3.14;
}

void main()
{
	int a;
	int b;
	chuvihcn(a,b);
	chuvihinhtron(a);
	chuvihinhvuong(a);
	system("pause");
}