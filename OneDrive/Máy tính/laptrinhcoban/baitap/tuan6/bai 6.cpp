#include <iostream>

using namespace std;

float kineticEnergy(float khoiluong, float vantoc)
{
	return (vantoc*vantoc*khoiluong)/2;
}
int main()
{
	float Khoiluong, vantoc;
	do 
	{
		cout<<"Nhap vao khoi luong cua vat (kg): ";
		cin>>Khoiluong;
		if (Khoiluong<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (Khoiluong<0);
	do 
	{
		cout<<"Nhap vao van toc cua vat (m): ";
		cin>>vantoc;
		if (vantoc<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (vantoc<0);
	cout<<"______________________________"<<endl;
	cout<<"Dong nang cua vat la: "<<kineticEnergy(Khoiluong, vantoc)<<endl;
	return 0;
}
