#include <iostream>
using namespace std;

float noitru(int songay, float phi1ngay, float phithuoc, float phikham)
{
	cout<<"Nhap vao so ngay nam vien: ";
	cin>>songay;
	cout<<"Nhap vao chi phi nam vien 1 ngay ($): ";
	cin>>phi1ngay;
	cout<<"Nhap vao phi thuoc men ($): ";
	cin>>phithuoc;
	cout<<"Nhap vao phi kham benh (xet nghiem, ...) ($): ";
	cin>>phikham;
	return songay*phi1ngay+phithuoc+phikham;
}
float ngoaitru(float phikham, float phithuoc)
{
	cout<<"Nhap vao phi kham chua benh ($): ";
	cin>>phikham;
	cout<<"Nhap vao phi thuoc men ($): ";
	cin>>phithuoc;
	return phikham+phithuoc;
}
int main()
{
	int songay;
	float phi1ngay, phithuoc,phikham;
	float chon;
	
	vt:
	cout<<"1. Noi tru."<<endl;
	cout<<"2. Ngoai tru."<<endl;
	cout<<"Ban nhap vien noi tru hay ngoai tru ?: ";
	cin>>chon;
	if (chon==1)
	{
		float gianoi=noitru(songay, phi1ngay, phithuoc, phikham);
		cout<<"Chi phi phai tra la:  $"<<gianoi<<endl;
	}
	else if(chon==2)
	{
		float giangoai=ngoaitru(phikham, phithuoc);
		cout<<"Chi phi phai tra la: "<<giangoai<<endl;
	}
	else 
	{
		cout<<"Eror!"<<endl;
		goto vt;
	}
	return 0;
}
