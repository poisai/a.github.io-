#include <iostream>
using namespace std;

void danso (int sodan, float tylesinh, float tyletu, int sonam, int chuyendi, int chuyenvao)
{
	for (int i=0; i<=sonam; i++)
	{
		sodan=sodan+(tylesinh/100)*sodan-(tyletu/100)*sodan+chuyenvao-chuyendi;
		cout<<"So dan sau "<<i+1<<" nam: "<<sodan<<" Nguoi."<<endl;
	}
}
int main()
{
	int sodan, sonam, chuyenvao, chuyendi;
	float tylesinh, tyletu;
	do
	{
		cout<<"Tong so dan nam bat dau tinh: ";
		cin>>sodan;
		if (sodan<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (sodan<0);
	do
	{
		cout<<"Nhap vao ty le sinh hang nam (%): ";
		cin>>tylesinh;
		cout<<"Nhap vao ty le tu hang nam (%): ";
		cin>>tyletu;
		if (tylesinh<0 || tyletu<0 || tylesinh>100 || tyletu>100)
		{
			cout<<"Hay nhap vao ty le chinh xac (0-100%)."<<endl;
		}
	}while (tylesinh<0 || tyletu<0 || tylesinh>100 || tyletu>100);
	do
	{
		cout<<"Nhap vao so nam can hien thi: ";
		cin>>sonam;
		if (sonam<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (sonam<0);
	do
	{
		cout<<"Nhap vao dan so chuyen vao hang nam: ";
		cin>>chuyenvao;
		if (chuyenvao<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai."<<endl;
		}
	}while (chuyenvao<0);
	do
	{
		cout<<"Nhap vao dan so chuyen di hang nam: ";
		cin>>chuyendi;
		if (chuyendi<0)
		{
			cout<<"Khong chap nhan gia tri am! Hay nhap lai. "<<endl;
		}
	}while (chuyendi<0);
	danso (sodan, tylesinh, tyletu, sonam, chuyendi, chuyenvao);
	return 0;
}
