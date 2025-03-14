#include<iostream>
using namespace std;
float calculateRetail(float giaban, float ptbanle)
{
	ptbanle/=100;
	return giaban+giaban*ptbanle;
}
int main()
{
	float giaban, ptbanle;
	do
	{	
		cout<<"Nhap  gia ban buon cua mat hang: ";
		cin>>giaban;
		cout<<"Nhap vao ty le phan tram chi phi ban le cua mat hang (%): ";
		cin>>ptbanle;
		if (giaban<0 || ptbanle<0)
		{
			cout<<"Khong chap nhan gia tri am ! Vui long nhap lai."<<endl;
		}
	}while (giaban<0 || ptbanle<0);
	cout<<"Gia tri ban le cua mat hang la: "<<calculateRetail(giaban, ptbanle);
return 0;
}
