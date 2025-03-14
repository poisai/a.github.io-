#include <iostream>
#include <string>
using namespace std;
double getSales(string donvi)
{
	float doanhso;
	do
	{	
		cout<<"Nhap vao doanh so cua don vi "<<donvi<<": ";
		cin>>doanhso;
		if (doanhso<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while(doanhso<0);
	return doanhso;
}
void findHighest(float doanhso1, float doanhso2, float doanhso3, float doanhso4)
{
	double HighestDS=doanhso1;
	string HighestDV="Dong Bac";
	if (doanhso2>HighestDS)
	{
		HighestDS=doanhso2;
		HighestDV="Dong Nam";
	}
	if (doanhso3>HighestDS)
	{
		HighestDS=doanhso3;
		HighestDV="Tay Bac";
	}
	if (doanhso4>HighestDS)
	{
		HighestDS=doanhso4;
		HighestDV="Tay Nam";
	}
	cout<<"Don vi "<<HighestDV<<" co doanh so cao nhat la: "<<HighestDS;
}
int main()
{
	float doanhso1=getSales("Dong Bac");
	float doanhso2=getSales("Dong Nam");
	float doanhso3=getSales("Tay Bac");
	float doanhso4=getSales("Tay Nam");
	findHighest(doanhso1, doanhso2, doanhso3, doanhso4);
}
