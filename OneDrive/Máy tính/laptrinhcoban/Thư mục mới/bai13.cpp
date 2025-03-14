#include <iostream>
using namespace std;

int slnv()
{
	int soluongnv;
	
	cout<<"Nhap vao so luong nhan vien cua cong ty: ";
	cin>>soluongnv;
	return soluongnv;
}
float ngaynghi(int soluongnv)
{
	int ngaynghi=0, Sumngay=0;
	
	for (int i=1; i<=soluongnv; i++)
	{
		cout<<"Nhap vao so ngay nghi cua nhan vien thu "<<i<<": ";
		cin>>ngaynghi;
		Sumngay+=ngaynghi;
	}
	return Sumngay;
}
double nghiTB(int soluongnv, float Sumngay)
{
	double nghiTB=Sumngay/soluongnv;
	return nghiTB;
}
int main()
{
	int soluongnv=slnv();
	float Sumngay=ngaynghi(soluongnv);
	cout<<"So ngay nghi trung binh cua cac nhan vien la: "<<nghiTB(soluongnv, Sumngay);
	return 0;
}
