#include <iostream>
using namespace std;

int main()
{
	int sophong;
	float Feetvuong, Sumfeet=0, giason;
	do
	{
		cout<<"Nhap vao so phong can son: ";
		cin>>sophong;
		if (sophong<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (sophong<0);
	
	for (int i=1; i<=sophong; i++)
	{
		cout<<"Nhap vao so feet vuong tuong can son cua phong "<<i<<": ";
		cin>>Feetvuong;
		if (Feetvuong<0)
		{
		cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
		while (Feetvuong<0)
		{
			cin>>Feetvuong;
		}
		Sumfeet+=Feetvuong;
	}
	do
	{
		cout<<"Nhap vao gia son cua moi binh ($): ";
		cin>>giason;
		if (giason<0)
		{
			cout<<"Khong chap nhan gia am! Hay nhap lai."<<endl;
		}
	}while (giason<0);
	cout<<"________________________________"<<endl;
	cout<<"So luong binh son can: "<<Sumfeet/110<<endl;
	cout<<"So gio lao dong can: "<<Sumfeet/110*8<<endl;
	cout<<"Gia tien son phai tra:  $"<<giason*(Sumfeet/110)<<endl;
	cout<<"Tong tien cong lao dong:  $"<<25*(Sumfeet/110*8)<<endl;
	cout<<"Tong cong chi phi:  $"<<(giason*(Sumfeet/110))+(25*(Sumfeet/110*8))<<endl;
	return 0;
}
