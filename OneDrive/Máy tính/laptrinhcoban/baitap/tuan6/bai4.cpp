#include <iostream>
#include <string>
using namespace std;

int getNamAccidents(string Khuvuc)
{
	int sovu;
	do
	{
		cout<<"Nhap vao so vu tai nan cua khu "<<Khuvuc<<": ";
		cin>>sovu;
		if (sovu<0)
		{
			cout<<"Khong chap nhan gia tri am. Hay nhap lai."<<endl;
		}
	}while (sovu<0);	
}
void findLowest(int sovu1, int sovu2, int sovu3, int sovu4, int sovu5)
{
	int thapnhat=sovu1;
	string KVthapnhat="Dong";
	if (sovu2<thapnhat)
	{
		thapnhat=sovu2;
		KVthapnhat="Nam";
	}
	else if (sovu2==thapnhat)
	{
		thapnhat=sovu2;
		KVthapnhat+=" va Nam";
	}
	if (sovu3<thapnhat)
	{
		thapnhat=sovu3;
		KVthapnhat="Tay";
	}
	else if (sovu3==thapnhat)
	{
		thapnhat=sovu3;
		KVthapnhat+=" va Tay";
	}
	if (sovu4<thapnhat)
	{
		thapnhat=sovu4;
		KVthapnhat="Bac";
	}
	else if (sovu4==thapnhat)
	{
		thapnhat=sovu4;
		KVthapnhat+=" va Bac";
	}
	if (sovu5<thapnhat)
	{
		thapnhat=sovu5;
		KVthapnhat="Trung Tam";
	}
	else if(sovu5==thapnhat)
	{
		thapnhat=sovu5;
		KVthapnhat+=" va Trung Tam";
	}
	cout<<"Khu vuc "<<KVthapnhat<<" la khu vuc co it vu tai nan nhat: "<<thapnhat;
}
int main()
{
	int sovu1=getNamAccidents("Dong");
	int sovu2=getNamAccidents("Nam");
	int sovu3=getNamAccidents("Tay");
	int sovu4=getNamAccidents("Bac");
	int sovu5=getNamAccidents("Trung Tam");
	findLowest(sovu1, sovu2, sovu3, sovu4, sovu5);
	return 0;
}
