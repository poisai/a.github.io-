#include <iostream>
using namespace std;

void getJudgeData(double &diem, string GK)
{
	do
	{
		cout<<"Nhap vao diem cua giam khao thu "<<GK<<": ";
		cin>>diem;
		if ((diem-(int)diem)*100>=10)
		{
			cout<<"Khong chap nhan gia tri co 2 so thap phan! Vui long nhap lai."<<endl;
		}
	}while ((diem-(int)diem)*100>=10);
}
double findLowest(double diem1, double diem2, double diem3, double diem4, double diem5);
double findHightest (double diem1, double diem2, double diem3, double diem4, double diem5);
void calcScore (double diem1, double diem2, double diem3, double diem4, double diem5)
{
	double thapnhat=findLowest (diem1, diem2, diem3, diem4, diem5);
	double caonhat=findHightest (diem1, diem2, diem3, diem4, diem5);
	double DiemTB=(diem1+diem2+diem3+diem4+diem5-thapnhat-caonhat)/3;
	cout<<"____________________________"<<endl;
	cout<<"Diem cua thi sinh la: "<<DiemTB;
}
double findLowest(double diem1, double diem2, double diem3, double diem4, double diem5)
{
	double thapnhat=min (diem1, min (diem2, min (diem3, min (diem4, diem5))));
	return thapnhat;
}
double findHightest (double diem1, double diem2, double diem3, double diem4, double diem5)
{
	double caonhat=max (diem1, max (diem2, max (diem3, max (diem4,diem5))));
	return caonhat;
}
int main()
{
	double diem1, diem2, diem3, diem4, diem5;
	getJudgeData(diem1, "1");
	getJudgeData(diem2, "2");
	getJudgeData(diem3, "3");
	getJudgeData(diem4, "4");
	getJudgeData(diem5, "5");
	calcScore (diem1, diem2, diem3, diem4, diem5);
	return 0;
}
