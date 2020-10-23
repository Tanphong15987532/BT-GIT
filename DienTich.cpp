#include <iostream>

using namespace std;
int dientichhinhvuong(int a);
int dientichhinhtron(int r);
int dientichchunhat(int b,int c)
void dientichhinhvuong(int a)
{
	cout << "nhap vao 2 canh a = ";
	cin >> a;
	cout << "Dien tich hinh vuong : " << a * a;
}
void dientichhinhtron(int r)
{
	cout << "nhap r = ";
	cin >> r;
	cout << "Dien tich hinh tron : " << (r * r)*3.14;
	
} 
void dientichchunhat(int b,int c)
{
	cout << "nhap b = ";
	cin >> b;
	cout << "nhap c = ";
	cin >> c;
	cout << "Dien tich hinh chu nhat : " << b * c;
	
} 
int main()
{
	dientichhinhvuong(int a);
	dientichhinhtron(int r);
	dientichchunhat(int b,int c)
	system("pause");
	return 0;
}