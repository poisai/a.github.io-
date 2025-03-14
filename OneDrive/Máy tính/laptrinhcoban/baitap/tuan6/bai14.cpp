#include <iostream>
using namespace std;

int sldonhang(int sldong)
{
	do
	{
		cout<<"Nhap vao so luong cuon dong cua don hang: ";
		cin>>sldong;
		if (sldong<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai.";
		}
	}while (sldong<0);
	return sldong;
}
int sltrongkho(int sltonkho)
{
	do 
	{
		cout<<"Nhap vao so luong cuon dong con trong kho: ";
		cin>>sltonkho;
		if (sltonkho<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (sltonkho<0);
}
float Chiphi(float chiphi)
{
	do
	{
		cout<<"Nhap vao chi phi cua moi cuon dong (neu co): ";
		cin>>chiphi;
		if (Chiphi<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai.";
		}
	}while (Chiphi<0);
	float Sumphi=10.0+chiphi;
	return Sumphi;
}
void tinhtrang()
{
	int sldong=sldonhang(sldong), sltonkho=sltrongkho(sltonkho);
	float chiphi=Chiphi(chiphi);
	
	if (sldong<=sltonkho)
	{
		cout<<"So luong cuon dong san sang chuyen tu kho cho don hang: "<<sldong<<endl;
	}
	else
	{
		cout<<"So luong cuon dong san sang chuyen tu kho cho don hang: "<<sltonkho<<endl;
		cout<<"So luong cuon dong con phai chuyen sang don hang sau: "<<sldong-sltonkho<<endl;
	}
	cout<<"Tong tien hang thang toan lan nay:  $"<<sldong*100<<endl;
	cout<<"Tong tien van chuyen va chi phi khac:  $"<<chiphi*sldong<<endl;
	cout<<"Tong tien don hang gom tien hang va chi phi:  $"<<chiphi*sldong+sldong*100<<endl;
}
int main()
{
	tinhtrang();
	return 0;
}


