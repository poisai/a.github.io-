#include <iostream>
using namespace std;
double getLength()
{
	double Length;
	do
	{
		cout<<"Nhap vao chieu dai cua hinh chu nhat: ";
		cin>>Length;
		if (Length<0)
		{
			cout<<"Khong nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (Length<0);
	return Length;
}
double getWidth()
{
	double Width;
	do
	{
		cout<<"Nhap vao chieu rong cua hinh chu nhat: ";
		cin>>Width;
		if (Width<0)
		{
			cout<<"Khong chap nhan gia tri am!. Hay nhap lai."<<endl;
		}
	}while (Width<0);
	return Width;
}
double getArea(double Length, double Width)
{
	double Area=Length*Width;
	return Area;
}
double displayData(double Width, double Length,  double Area)
{
	cout<<"Chieu rong cua hinh chu nhat la: "<<Width<<endl;
	cout<<"Chieu dai cua hinh chu nhat la: "<<Length<<endl;
	cout<<"Dien tich cua hinh chu nhat la: "<<Area<<endl;
}
int main()
{
	double Width=getWidth(), Length=getLength(), Area=getArea(Length, Width);
	displayData(Width, Length, Area);
return 0;
}
