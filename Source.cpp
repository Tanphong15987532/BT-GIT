#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a = 10;
	int b = 2;

	
	int tongab= tong(a,b);
	int tichab= tich(a,b);
	float thuongab= thuong(a,b);
	
	cout<<"tong a + b = "<<tongab;
	cout<<"tich a * b = "<tichab;
	cout<<"thuong a / b = "<thuongab;

		
	
	int hieuab = hieu(a,b);
	cout <<"Hieu a - b = " << hieuab << endl;

	system("pause");
	return 0;
}

int tong(int a, int b)
{
	int tong=0;
	tong=a+b;
	return tong;
}

int tich(int a, int b)
{
	int tich=0;
	tich=a*b;
	return tich;

int hieu(int a, int b){
	int sum = 0;
	sum = a - b;
	return b;

}
float thuong(int a, int b)
{
	float thuong=0;
	thuong=a/b;
	return thuong;
}