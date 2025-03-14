#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float ngay ,tong ,i ,tongluong;
	tong=1;
	i=1;
	cout<<"nhap so ngay lam:";
	cin>>ngay;
	while(ngay<1){
		cout<<"nhap sai ngay xin nhap lai:";
		cin>>ngay;
	}
	while(i<=ngay){
		cout<<"so tien luong sau ngay:"<<i<<"la:"<<tong<<"xu"<<endl;
		i++;tong+=tong;
		tongluong=tong/2/100;
		
	}
	cout<<"tong luong la:"<<tongluong<<"dollar";
	return 0;
}
