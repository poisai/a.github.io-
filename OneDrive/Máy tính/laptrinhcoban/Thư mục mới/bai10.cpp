#include <iostream>
#include <cmath>
using namespace std;

float futureValue(float tiendau, float laithang, int sothang)
{
	laithang/=100;
	float tiennhan=tiendau*pow(1+laithang, sothang);
	return tiennhan;
}

int main()
{
	float tiendau, laithang;
	int sothang;
	
	cout<<"Nhap vao so tien ban co ban dau ($): ";
	cin>>tiendau;
	cout<<"Nhap vao lai suat theo thang cua ngan hang (%): ";
	cin>>laithang;
	cout<<"Nhap vao so thang se gui: ";
	cin>>sothang;
	cout<<"__________________________________"<<endl;
	cout<<"So tien ban se nhan duoc trong tuong lai la:  $"<<futureValue(tiendau, laithang, sothang);
	return 0;
}
