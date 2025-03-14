#include <iostream>
using namespace std;

void getScore (int &diem)
{
	do
	{
		cout<<"Nhap vao diem (0-100): ";
		cin>>diem;
		if (diem<0 || diem>100)
		{
			cout<<"Khong hop le! Vui long nhap lai (0-100).";
		}
	}while (diem<0 || diem>100);
}
int findLowest(int diem1, int diem2, int diem3, int diem4, int diem5)
{
	int thapnhat=min(diem1, min(diem2, min(diem3, min(diem4,diem5))));
	return thapnhat;
}
void calcAverage(int diem1 , int diem2, int diem3, int diem4, int diem5)
{
	int thapnhat=findLowest(diem1, diem2, diem3, diem4, diem5);
	float diemTB=(diem1+diem2+diem3+diem4+diem5-thapnhat)/4;
	cout<<"Diem trung binh cua 4 diem cao nhat: "<<diemTB;
}

int main()
{
	int diem1, diem2, diem3, diem4, diem5;
	getScore(diem1);
	getScore(diem2);
	getScore(diem3);
	getScore(diem4);
	getScore(diem5);
	calcAverage(diem1, diem2, diem3, diem4, diem5);
	return 0;

}


